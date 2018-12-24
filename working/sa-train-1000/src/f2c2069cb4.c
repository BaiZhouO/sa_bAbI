#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    char entity_7[28];                       // Tag.BODY
    entity_1 = 85;                           // Tag.BODY
    if(entity_3 < entity_1){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 28;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_3] = 'g';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_6 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER