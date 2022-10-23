using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Movement_Keys : MonoBehaviour
{

	//Declaro la variable de tipo RigidBody que luego asociaremos a nuestro Jugador
	public Transform tr;

	//Declaro la variable pública velocidad para poder modificarla desde la Inspector window
	[Range(0, 2)]
	public float linearSpeed = 0.1f;

	[Range(0, 2)]
	public float angularSpeed = 0.6f;


	void Start()
	{

		//Capturo el rigidbody del jugador al iniciar el juego
		//PositionTransform = GetComponent<Transform>();

	}

	void FixedUpdate()
	{
		//Z axis movement
		Vector3 linearInput = Vector3.zero;

		if (Input.GetKey(KeyCode.W))

		{ 
			linearInput.z = 1;
		}
		else if (Input.GetKey(KeyCode.S))
		{ 
			linearInput.z = -1;
		}
		Vector3 angularInput = Vector3.zero;

		//Y axis rotation
		if (Input.GetKey(KeyCode.D))

		{
			angularInput.y = 1;
		}
		else if (Input.GetKey(KeyCode.A))
		{
			angularInput.y = -1;
		}

		
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