//TODO: 1) add when button release throw ball
//TODO: 2) find what they fully want...
//! I am 90% positive that half of the ports have to be removed

task main()
{
	while(true) //* forever
	{
		if(vexRT(Ch2) == 1) //* for channel 2
		{
			motor(port2)=127;
			motor(port3)=127;
			motor(port4)=127;
			motor(port5)=127;

		}
		else if(vexRT(Ch3) == 1) //* for channel 3
		{
			motor(port2)=127;
			motor(port3)=127;
			motor(port4)=127;
			motor(port5)=127;
		}
		else 
		{
			motor(port2)=0;
			motor(port3)=0;
			motor(port4)=0;
			motor(port5)=0;
		}
		
		//! arm
		if(vexRT[Btn6U] == 1)
		{
			motor(port6) = 127; // add correct port for arm
			motor(port7) = 127; // add correct port for arm
		}
		else
		{
			motor(port6) = 0;
			motor(port7) = 0;
		}
	}
}
