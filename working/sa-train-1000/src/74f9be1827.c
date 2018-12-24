#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_6[14];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_7 = 34;                           // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 25;                           // Tag.BODY
    char entity_5[20];                       // Tag.BODY
    if(entity_3 < entity_2){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6[entity_7] = 'x';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3 = 95;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_3] = 'W';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_0 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER