#include<stdio.h>
int main()
{
	int Device,code;
	printf("Please select the device you are using, enter the respective number\n1.Laptop\n2.Smartphone\n3.Router\n");
	scanf("%d",&Device);
	if(Device==1)
	{
		printf("\nSelect the problem code by entering the respective number \n'10' if not turning on\n'11' if Overheating\n'12' for slow performance\n");
		scanf("%d",&code);
		switch(code)
		{
			case 10 :
				printf("Check power adapter and battery connections. Try a different power outlet. Remove battery and hold power button for 30 seconds.\n");
				break;
			case 11 :
				printf("Clean fans and ensure proper ventilation. Check for dust accumulation. Use a cooling pad. Monitor CPU usage.\n");
				break;
			case 12 :
				printf("Run system diagnostics and check resource usage. Scan for malware. Upgrade RAM if necessary. Defragment hard drive.\n");	
			break;		
		}
	}
	else if(Device==2)
	{
		printf("\nSelect the problem code by entering the respective number \n'20' for Battery drains fast\n'21' for No signal\n'22' for Touch screen unresponsive\n");
		scanf("%d",&code);
		switch(code)
		{
			case 20 :
				printf("Run battery calibration tool and check for background apps. Reduce screen brightness. Disable unnecessary connectivity features.\n");
				break;
			case 21 :
				printf("Check SIM card and network settings. Toggle airplane mode. Update carrier settings. Check for network outages.\n");
				break;
			case 22 :
				printf("Perform screen calibration test. Clean screen surface. Restart device. Check for software updates.\n");	
				break;	
		}
	}
	else if(Device==3)
	{
		printf("\nSelect the problem code by entering the respective number \n'30' for No internet Connection \n'31' for WiFi signal weak\n'32' for Device can't connect.\n");
		scanf("%d",&code);
		switch(code)
		{
			case 30 :
				printf("Check ISP status and router cables. Restart modem and router. Check WAN connection settings. Verify internet subscription.\n");
				break;
			case 31 :
				printf("Reposition router and check antenna connections. Reduce interference from other devices. Change Wi-Fi channel. Consider range extender.\n");
				break;
			case 32 :
				printf("Check MAC filtering and DHCP settings. Verify Wi-Fi password. Restart connecting device. Check for IP conflicts.\n");		
				break;
		}
	}
	else
	{
		printf("Invalid Code");
	}
	return 0;
}
