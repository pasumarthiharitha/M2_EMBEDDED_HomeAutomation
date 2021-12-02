#ifndef TASK4_H_INCLUDED
#define TASK4_H_INCLUDED
/** \brief initialize USART
 *
 * \param ubrr_value
 *
 */

void USARTInit(uint16_t ubrr_value);
/** \brief send the the modified temperature value to USART 
 *
 * \param temp_value
 */

void USARTWrite(char temp_value);

char temp_disp();
#endif // TASK4_H_INCLUDED
