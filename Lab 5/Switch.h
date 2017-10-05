
#define PF4                     (*((volatile uint32_t *)0x40025040))
#define PF3                     (*((volatile uint32_t *)0x40025020))
#define PF2                     (*((volatile uint32_t *)0x40025010))
#define PF0                     (*((volatile uint32_t *)0x40025004))
	
static void Timer1Arm(void);
// Interrupt 10 ms after rising edge of PF4
void Timer1A_Handler(void);

void GPIOPortF_Handler(void);

/* initialize PF4 for interrupt */
void EdgeInterrupt_Init(void);



void PortF_Init(void);

