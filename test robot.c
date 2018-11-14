//TODO: 1) add when button release throw ball
//TODO: 2) find what they fully want...

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
		else if(vexRT(Ch2) == 1) //* for channel 3
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
		if(vexRT[Btn6U] == 1)
		{
			motor(port6) = 127; // add correct port for arm
			motor(port7) = 127; // add correct port for arm
		}
		else
		{
			motor(port2)=0;
			motor(port3)=0;
			motor(port4)=0;
			motor(port5)=0;
		}
	}
}
