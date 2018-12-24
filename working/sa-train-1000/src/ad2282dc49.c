#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_3 = 10;                           // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    char entity_7[49];                       // Tag.BODY
    if(entity_2 < entity_3){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 40;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_2] = 'F';                // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_1 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER