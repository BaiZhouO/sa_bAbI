#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    char entity_1[50];                       // Tag.BODY
    entity_6 = 31;                           // Tag.BODY
    entity_4 = 10;                           // Tag.BODY
    char entity_7[71];                       // Tag.BODY
    if(entity_9 < entity_4){                 // Tag.BODY
    entity_1[entity_6] = 'R';                // Tag.BUFWRITE_TAUT_SAFE
    } else {                                 // Tag.BODY
    entity_9 = 23;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_9] = '9';                // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_9;                    // Tag.POINTER_DEC
    char entity_3[87];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    char *entity_5 = (char *)(entity_8 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_2 = 46;                           // Tag.BODY
    entity_3[entity_2] = 'J';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER