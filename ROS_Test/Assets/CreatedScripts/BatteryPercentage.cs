/*
© Siemens AG, 2017-2018
Author: Dr. Martin Bischoff (martin.bischoff@siemens.com)

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
<http://www.apache.org/licenses/LICENSE-2.0>.
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

using UnityEngine;
using UnityEngine.UI;

namespace RosSharp.RosBridgeClient
{
    public class BatteryPercentage : UnitySubscriber<MessageTypes.Sensor.BatteryState>
    {
        //public Transform PublishedTransform;

        public float batteryPercen;
        public Text batText;
        private float[] lastBatValues = { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
        private float lastMean = 100;
        private int receivedVals = 0;
        private bool isMessageReceived;
        protected override void Start()
        {
            base.Start();
        }

        private void Update()
        {
            if (isMessageReceived)
            {
                ProcessMessage();
                if (receivedVals > 9)
                {
                    receivedVals = 0;
                }
                lastBatValues[receivedVals] = batteryPercen;
                float sum = 0;
                for (int i = 0; i <= receivedVals; i++) { 
                    sum = sum + lastBatValues[i];
                }

                float batteryPercenMean = sum / receivedVals;

                batteryPercenMean = sum / (receivedVals+1);

                if (batteryPercenMean < lastMean)
                {
                    lastMean = batteryPercenMean;
                }

                receivedVals = receivedVals + 1;
                batText.text = "Battery:\n " + (lastMean).ToString("N1") + " %";
            }
        }

        protected override void ReceiveMessage(MessageTypes.Sensor.BatteryState message)
        {
            batteryPercen = (float)message.percentage;
            isMessageReceived = true;
        }
        private void ProcessMessage()
        {
            //PublishedTransform.position = position;
            //PublishedTransform.rotation = rotation;
        }

    }
}