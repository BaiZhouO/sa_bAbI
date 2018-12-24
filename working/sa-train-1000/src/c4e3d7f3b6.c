#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = 15;                           // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    char entity_1[55];                       // Tag.BODY
    if(entity_6 < entity_9){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 9;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_6] = '9';                // Tag.BUFWRITE_COND_SAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_6;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_2 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER