using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.SceneManagement;
using UnityEngine.InputSystem;
//using UnityEditor.XR.OpenXR.Features;



public class Movement_Keys : MonoBehaviour
{

	//Declaro la variable de tipo RigidBody que luego asociaremos a nuestro Jugador
	public Transform tr;

	//Declaro la variable pública velocidad para poder modificarla desde la Inspector window
	[Range(0, 2)]
	public float linearSpeed = 0.1f;

	[Range(0, 2)]
	public float angularSpeed = 0.6f;

	public Vector3 linearInput;
	public Vector3 angularInput;
	public Vector2 pos;
	float K = 0;
	//public float n = 0;
	//public static GameObject theGM = null;
	public InputActionReference leftJoystick;
	public InputActionReference rightJoystick;
	public InputActionReference button;

	void Start()
	{
		//UnityEngine.XR.XRSettings.enabled = true;
		//UnityEngine.XR.OpenXR.Features.OpenXRFeature.enabled = true;
		//singleton
		/*if (theGM == null)
		{
			theGM = this;
		}
		else if (theGM != this)
		{
			//enforce singleton pattern, meaning there can only ever be one instance of a GameManager.
			Destroy(gameObject); //<- this makes OnDestroy() be called and
								 //we don't want to deinit everything there (leave it empty).
			return;
		}*/
		//Capturo el rigidbody del jugador al iniciar el juego
		//PositionTransform = GetComponent<Transform>();

	}
	private void buttonClick(InputAction.CallbackContext ctx) {
		K = K + 1;
	}

	void FixedUpdate()
	{
		button.action.started += buttonClick;
		//leftJoystick.action.performed += joystickMove;
		/*if (button.action.started+=K)
		{
			Debug.Log("Boton apretado");
			K = K + 1;
			//buttonInput = button.action.ReadValue<Boolean>();
		}
		else {
			n = n + 1;
			//buttonInput = button.action.ReadValue<Boolean>();

		}*/
		//Z and X axis movement
		linearInput = Vector3.zero;
		angularInput = Vector3.zero;
		
		// returns a Vector2 of the primary (typically the Left) thumbstick’s current state.
		// (X/Y range of -1.0f to 1.0f)
		pos.y = leftJoystick.action.ReadValue<Vector2>().x;
		pos.x = rightJoystick.action.ReadValue<Vector2>().y;
		//joystickInput = leftJoystick.action.ReadValue<Vector2>();
		linearInput.z = pos.x;
		angularInput.y = pos.y;
		//pos.x = linearInput.z;
		//pos.y = angularInput.y;
		
		/*if (OVRInput.Get(OVRInput.Axis.Two))//W

		{ 
			linearInput.z = 1;
		}
		else if (Input.GetKey(KeyCode.S))//S
		{ 
			linearInput.z = -1;
		}

		//Y axis rotation
		if (OVRInput.Get(OVRInput.Axis.One))//D

		{
			angularInput.y = 1;
		}
		else if (Input.GetKey(KeyCode.A))//A
		{
			angularInput.y = -1;
		}*/

		
		MoveDirection(linearInput);
		MoveRotation(angularInput);

		void MoveDirection(Vector3 direction) 
		{
			tr.position += direction.normalized * linearSpeed * Time.deltaTime;
		}
		void MoveRotation(Vector3 direction)
		{
			
			tr.eulerAngles += direction.normalized * angularSpeed * Time.deltaTime;
			//tr.rotation = new Quaternion(Time.deltaTime*angularSpeed, tr.rotation.y + direction * angularSpeed * Time.deltaTime ,0f ,0f);
		}
		/*//Capturo el movimiento en horizontal y vertical de nuestro teclado
		float movimientoH = Input.GetAxis("Horizontal");
		float movimientoV = Input.GetAxis("Vertical");

		//Genero el vector de movimiento asociado, teniendo en cuenta la velocidad
		Vector3 movimiento = new Vector3(movimientoH * velocidad, 0.0f, movimientoV * velocidad);

		//Aplico ese movimiento al RigidBody del jugador
		rb.AddForce(movimiento);*/

	}
}