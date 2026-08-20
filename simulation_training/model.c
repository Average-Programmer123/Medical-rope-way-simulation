// // compiled model made using the pythonto_c.py script 
//      _______. __    __  ____    ____  ___           _______. __    __  
//     /       ||  |  |  | \   \  /   / /   \         /       ||  |  |  | 
//    |   (----`|  |  |  |  \   \/   / /  ^  \       |   (----`|  |__|  | 
//     \   \    |  |  |  |   \_    _/ /  /_\  \       \   \    |   __   | 
// .----)   |   |  `--'  |     |  |  /  _____  \  .----)   |   |  |  |  | 
// |_______/     \______/      |__| /__/     \__\ |_______/    |__|  |__| 
                                                                       
                                                                       
//   ___                                                                  
//  ( _ )                                                                 
//  / _ \/\                                                               
// | (_>  <                                                               
//  \___/\/                                                               
                                                                       
//      ___      .__   __. .___  ___.   ______    __                      
//     /   \     |  \ |  | |   \/   |  /  __  \  |  |                     
//    /  ^  \    |   \|  | |  \  /  | |  |  |  | |  |                     
//   /  /_\  \   |  . `  | |  |\/|  | |  |  |  | |  |                     
//  /  _____  \  |  |\   | |  |  |  | |  `--'  | |  `----.                
// /__/     \__\ |__| \__| |__|  |__|  \______/  |_______|                
                                                                       
#include <string.h>
void add_vectors(double *v1, double *v2, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] + v2[i];
}
void mul_vector_number(double *v1, double num, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] * num;
}
void score(double * input, double * output) {
    double var0[2];
    double var1[2];
    double var2[2];
    double var3[2];
    double var4[2];
    double var5[2];
    double var6[2];
    double var7[2];
    double var8[2];
    double var9[2];
    double var10[2];
    double var11[2];
    double var12[2];
    double var13[2];
    double var14[2];
    double var15[2];
    if (input[1] <= 0.5310716927051544) {
        if (input[0] <= -0.32487861812114716) {
            memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            if (input[0] <= 0.015928193926811218) {
                if (input[2] <= -0.39215846359729767) {
                    if (input[1] <= 0.09545250982046127) {
                        if (input[1] <= -0.677872896194458) {
                            memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[4] <= 2.0546858310699463) {
                                if (input[3] <= 0.14287196099758148) {
                                    memcpy(var15, (double[]){0.3101851851851852, 0.6898148148148148}, 2 * sizeof(double));
                                } else {
                                    memcpy(var15, (double[]){0.15177065767284992, 0.8482293423271501}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= 0.49374546110630035) {
                                    memcpy(var15, (double[]){0.6111111111111112, 0.3888888888888889}, 2 * sizeof(double));
                                } else {
                                    memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[3] <= -0.6380815505981445) {
                            if (input[4] <= 3.18386971950531) {
                                memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[4] <= 0.24685139954090118) {
                        if (input[1] <= 0.05534600466489792) {
                            if (input[1] <= 0.045281071215867996) {
                                if (input[1] <= -0.510472759604454) {
                                    memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var15, (double[]){0.025787965616045846, 0.9742120343839542}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var15, (double[]){0.4444444444444444, 0.5555555555555556}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[1] <= 1.5261199474334717) {
            if (input[4] <= -0.3220805525779724) {
                if (input[0] <= -0.32487861812114716) {
                    memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[1] <= 0.6803369522094727) {
                        if (input[0] <= 0.015928193926811218) {
                            if (input[4] <= -1.5734919309616089) {
                                memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[3] <= -0.6994615197181702) {
                                    memcpy(var15, (double[]){0.6, 0.4}, 2 * sizeof(double));
                                } else {
                                    memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[2] <= 0.3149040937423706) {
                            if (input[3] <= 1.3737062215805054) {
                                if (input[1] <= 1.433400809764862) {
                                    memcpy(var15, (double[]){0.017740429505135387, 0.9822595704948646}, 2 * sizeof(double));
                                } else {
                                    memcpy(var15, (double[]){0.8, 0.2}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[0] <= 0.015928193926811218) {
                                    memcpy(var15, (double[]){0.10256410256410256, 0.8974358974358975}, 2 * sizeof(double));
                                } else {
                                    memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[3] <= -1.438871443271637) {
                                if (input[2] <= 1.0136310160160065) {
                                    memcpy(var15, (double[]){0.40425531914893614, 0.5957446808510638}, 2 * sizeof(double));
                                } else {
                                    memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[0] <= 0.015928193926811218) {
                    if (input[4] <= 0.32671763002872467) {
                        if (input[4] <= -0.2970433235168457) {
                            if (input[2] <= 0.7682767808437347) {
                                if (input[3] <= 1.5084980130195618) {
                                    memcpy(var15, (double[]){0.24, 0.76}, 2 * sizeof(double));
                                } else {
                                    memcpy(var15, (double[]){0.07407407407407407, 0.9259259259259259}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= -1.5775400400161743) {
                                    memcpy(var15, (double[]){0.0967741935483871, 0.9032258064516129}, 2 * sizeof(double));
                                } else {
                                    memcpy(var15, (double[]){0.8181818181818182, 0.18181818181818182}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[3] <= -1.4200947284698486) {
                                if (input[1] <= 0.9939822852611542) {
                                    memcpy(var15, (double[]){0.03968253968253968, 0.9603174603174603}, 2 * sizeof(double));
                                } else {
                                    memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[3] <= 1.6919136047363281) {
                                    memcpy(var15, (double[]){0.8885976408912188, 0.11140235910878113}, 2 * sizeof(double));
                                } else {
                                    memcpy(var15, (double[]){0.6506172839506172, 0.3493827160493827}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[0] <= -0.32487861812114716) {
                            memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[4] <= 3.5477383136749268) {
                                if (input[3] <= -1.4392443895339966) {
                                    memcpy(var15, (double[]){0.0855106888361045, 0.9144893111638955}, 2 * sizeof(double));
                                } else {
                                    memcpy(var15, (double[]){0.00628256205945449, 0.9937174379405455}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[5] <= -4.024573087692261) {
                if (input[4] <= 0.33155709505081177) {
                    if (input[5] <= -4.0584893226623535) {
                        if (input[4] <= -0.31956352293491364) {
                            memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    }
    double var16[2];
    if (input[5] <= 0.0199042446911335) {
        if (input[2] <= 1.029210388660431) {
            if (input[0] <= -0.32487861812114716) {
                memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[4] <= 0.3279561251401901) {
                    if (input[4] <= -0.2888099253177643) {
                        if (input[4] <= -1.678227722644806) {
                            memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[3] <= -1.4431049823760986) {
                                if (input[2] <= 0.9003556668758392) {
                                    memcpy(var16, (double[]){0.29850746268656714, 0.7014925373134329}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= 0.6717906296253204) {
                                    memcpy(var16, (double[]){0.01903367496339678, 0.9809663250366032}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.003537735849056604, 0.9964622641509434}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 0.8830007612705231) {
                            if (input[5] <= -0.007787944283336401) {
                                if (input[2] <= 0.5135376453399658) {
                                    memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.7990654205607477, 0.20093457943925233}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= -0.005571013316512108) {
                                    memcpy(var16, (double[]){0.0967741935483871, 0.9032258064516129}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[1] <= 0.7952229678630829) {
                                if (input[3] <= -1.2109007239341736) {
                                    memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.15384615384615385, 0.8461538461538461}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[4] <= -0.11538533121347427) {
                                    memcpy(var16, (double[]){0.5833333333333334, 0.4166666666666667}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.9459459459459459, 0.05405405405405406}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 1.5657954812049866) {
                        if (input[4] <= 1.3978800177574158) {
                            if (input[3] <= -1.426644742488861) {
                                if (input[2] <= 0.5473495423793793) {
                                    memcpy(var16, (double[]){0.15, 0.85}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.006493506493506494, 0.9935064935064936}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var16, (double[]){0.15625, 0.84375}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 1.2907137274742126) {
                if (input[1] <= 1.1321203112602234) {
                    if (input[2] <= 1.2424631118774414) {
                        if (input[5] <= -0.8720621764659882) {
                            if (input[4] <= -0.18041297793388367) {
                                memcpy(var16, (double[]){0.3076923076923077, 0.6923076923076923}, 2 * sizeof(double));
                            } else {
                                if (input[1] <= 1.0702358484268188) {
                                    memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.5454545454545454, 0.45454545454545453}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[3] <= 0.3002334237098694) {
                                if (input[1] <= 0.8998651206493378) {
                                    memcpy(var16, (double[]){0.5555555555555556, 0.4444444444444444}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.045307443365695796, 0.9546925566343042}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= -0.7598592340946198) {
                                    memcpy(var16, (double[]){0.07407407407407407, 0.9259259259259259}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.015384615384615385, 0.9846153846153847}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[5] <= -1.247406542301178) {
                            if (input[1] <= 0.9660270512104034) {
                                if (input[1] <= 0.05534600466489792) {
                                    memcpy(var16, (double[]){0.022202486678507993, 0.977797513321492}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.0069675855801272345, 0.9930324144198728}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= -1.2647618651390076) {
                                    memcpy(var16, (double[]){0.0588568194680249, 0.9411431805319751}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[4] <= 0.16693377494812012) {
                                if (input[5] <= -0.939022421836853) {
                                    memcpy(var16, (double[]){0.0033003300330033004, 0.9966996699669967}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.0410958904109589, 0.958904109589041}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[3] <= -1.2453567385673523) {
                        if (input[2] <= 1.5363748669624329) {
                            if (input[2] <= 1.3659206628799438) {
                                if (input[1] <= 1.1532573699951172) {
                                    memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.14678899082568808, 0.8532110091743119}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[2] <= 1.8617421388626099) {
                                if (input[2] <= 1.8374662399291992) {
                                    memcpy(var16, (double[]){0.08791208791208792, 0.9120879120879121}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= 1.1803919672966003) {
                                    memcpy(var16, (double[]){0.0625, 0.9375}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[5] <= -1.7560880184173584) {
                            if (input[2] <= 1.918035089969635) {
                                memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[5] <= -1.8559401631355286) {
                                    memcpy(var16, (double[]){0.03526448362720403, 0.964735516372796}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[2] <= 1.8475564122200012) {
                                if (input[4] <= 0.32897844910621643) {
                                    memcpy(var16, (double[]){0.28865979381443296, 0.711340206185567}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[5] <= -4.024575233459473) {
                    if (input[1] <= 1.6403045654296875) {
                        if (input[4] <= 0.33268922567367554) {
                            if (input[2] <= 3.102315664291382) {
                                memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[1] <= 1.4366647601127625) {
                                    memcpy(var16, (double[]){0.07482993197278912, 0.9251700680272109}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.19157088122605365, 0.8084291187739464}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[5] <= -4.024639129638672) {
                            memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[1] <= 1.6690492033958435) {
                                memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var16, (double[]){0.041666666666666664, 0.9583333333333334}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[1] <= 1.4575423002243042) {
                        if (input[1] <= 1.3951230645179749) {
                            if (input[2] <= 1.996764063835144) {
                                if (input[2] <= 1.3265398740768433) {
                                    memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.08582089552238806, 0.914179104477612}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[3] <= 1.7351857423782349) {
                                if (input[4] <= 0.498460128903389) {
                                    memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.12, 0.88}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[4] <= 0.32872171700000763) {
                                    memcpy(var16, (double[]){0.88, 0.12}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 1.1133099794387817) {
                            if (input[3] <= -0.6749541349709034) {
                                memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                }
            }
        }
    } else {
        if (input[4] <= 0.33832626044750214) {
            if (input[0] <= -0.32487861812114716) {
                memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[0] <= 0.015928193926811218) {
                    if (input[5] <= 0.28300532698631287) {
                        if (input[3] <= 1.828195035457611) {
                            if (input[3] <= -1.2833712697029114) {
                                if (input[5] <= 0.20205146074295044) {
                                    memcpy(var16, (double[]){0.9430051813471503, 0.05699481865284974}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.4666666666666667, 0.5333333333333333}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= 1.1710883975028992) {
                                    memcpy(var16, (double[]){0.2222222222222222, 0.7777777777777778}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[4] <= -0.12975237146019936) {
                                memcpy(var16, (double[]){0.03125, 0.96875}, 2 * sizeof(double));
                            } else {
                                if (input[1] <= 1.1097028851509094) {
                                    memcpy(var16, (double[]){0.25, 0.75}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[4] <= -0.3264352083206177) {
                            if (input[1] <= 1.4779123067855835) {
                                if (input[5] <= 0.42474159598350525) {
                                    memcpy(var16, (double[]){0.03474903474903475, 0.9652509652509652}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.21660649819494585, 0.7833935018050542}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[5] <= 0.503300130367279) {
                                if (input[3] <= -1.3215786814689636) {
                                    memcpy(var16, (double[]){0.46923076923076923, 0.5307692307692308}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.9233333333333333, 0.07666666666666666}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= 0.5311296582221985) {
                                    memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.42424242424242425, 0.5757575757575758}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[5] <= 0.41303038597106934) {
                if (input[1] <= 0.754729151725769) {
                    if (input[0] <= -0.32487861812114716) {
                        memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[0] <= 0.015928193926811218) {
                            memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[5] <= 0.3512406349182129) {
                        if (input[1] <= 0.8448434174060822) {
                            if (input[2] <= 0.05507238954305649) {
                                memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[0] <= 0.015928193926811218) {
                                memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[2] <= -0.27498435974121094) {
                            if (input[3] <= -1.4294851422309875) {
                                if (input[5] <= 0.3888522535562515) {
                                    memcpy(var16, (double[]){0.24444444444444444, 0.7555555555555555}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.7, 0.3}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= -0.3319782614707947) {
                                    memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.11510791366906475, 0.8848920863309353}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[0] <= -0.32487861812114716) {
                    memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[5] <= 0.5234555304050446) {
                        if (input[0] <= 0.015928193926811218) {
                            if (input[1] <= 1.4806458353996277) {
                                if (input[4] <= 3.279215693473816) {
                                    memcpy(var16, (double[]){0.14539579967689822, 0.8546042003231018}, 2 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var15, var16, 2, var14);
    double var17[2];
    if (input[3] <= 0.7005556225776672) {
        if (input[5] <= -0.46467941999435425) {
            if (input[5] <= -0.7065994441509247) {
                if (input[2] <= 1.2778077125549316) {
                    if (input[1] <= 1.183460772037506) {
                        if (input[4] <= -0.32013724744319916) {
                            memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[2] <= 1.2509419322013855) {
                                if (input[4] <= 0.3356895446777344) {
                                    memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.026455026455026454, 0.9735449735449735}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[5] <= -1.7747310996055603) {
                        if (input[4] <= -0.32928837835788727) {
                            memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[4] <= 0.29706045985221863) {
                                if (input[5] <= -1.9241453409194946) {
                                    memcpy(var17, (double[]){0.2727272727272727, 0.7272727272727273}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.7222222222222222, 0.2777777777777778}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[1] <= 1.132732629776001) {
                            if (input[4] <= -0.31939978897571564) {
                                memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[1] <= 0.9901164174079895) {
                                    memcpy(var17, (double[]){0.02556818181818182, 0.9744318181818182}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.08536585365853659, 0.9146341463414634}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[4] <= 0.32897844910621643) {
                                if (input[1] <= 1.177396833896637) {
                                    memcpy(var17, (double[]){0.432258064516129, 0.567741935483871}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.25691699604743085, 0.7430830039525692}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[1] <= 0.6091559529304504) {
                    memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[2] <= 1.0443904399871826) {
                        if (input[4] <= 0.3660978823900223) {
                            if (input[1] <= 1.1946693658828735) {
                                if (input[3] <= 0.37041009962558746) {
                                    memcpy(var17, (double[]){0.1392857142857143, 0.8607142857142858}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[3] <= -0.27690431475639343) {
                                    memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.05660377358490566, 0.9433962264150944}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[3] <= -0.8199871778488159) {
                            if (input[3] <= -1.113762527704239) {
                                if (input[4] <= -0.3073906749486923) {
                                    memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var17, (double[]){0.35294117647058826, 0.6470588235294118}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[4] <= -0.3821168392896652) {
                                memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var17, (double[]){0.1111111111111111, 0.8888888888888888}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if (input[0] <= -0.32487861812114716) {
                memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[2] <= -0.39186328649520874) {
                    if (input[2] <= -1.0456608533859253) {
                        if (input[3] <= 0.19646967947483063) {
                            if (input[1] <= 0.09185994789004326) {
                                memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[3] <= 0.19380462169647217) {
                                    memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.375, 0.625}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[4] <= -0.32578693330287933) {
                                if (input[2] <= -1.0889307260513306) {
                                    memcpy(var17, (double[]){0.21212121212121213, 0.7878787878787878}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.16, 0.84}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[4] <= 0.6371422708034515) {
                            if (input[3] <= -0.4788655638694763) {
                                if (input[0] <= 0.015928193926811218) {
                                    memcpy(var17, (double[]){0.1901840490797546, 0.8098159509202454}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[3] <= 0.25331301987171173) {
                                    memcpy(var17, (double[]){0.9804147465437788, 0.019585253456221197}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.832258064516129, 0.16774193548387098}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[2] <= -0.5036566853523254) {
                                if (input[5] <= 0.520215779542923) {
                                    memcpy(var17, (double[]){0.2388888888888889, 0.7611111111111111}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= -0.43954163789749146) {
                                    memcpy(var17, (double[]){0.7415730337078652, 0.25842696629213485}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.15517241379310345, 0.8448275862068966}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= -0.3295565992593765) {
                        if (input[1] <= 0.7245151698589325) {
                            memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[3] <= -1.4427839517593384) {
                                if (input[4] <= -1.1567344665527344) {
                                    memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.1746987951807229, 0.8253012048192772}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[4] <= 0.3253999352455139) {
                            if (input[0] <= 0.015928193926811218) {
                                if (input[1] <= 0.9281880557537079) {
                                    memcpy(var17, (double[]){0.22145328719723184, 0.7785467128027682}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.9704641350210971, 0.029535864978902954}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[1] <= 0.6895850300788879) {
                                memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[1] <= 1.3651897311210632) {
                                    memcpy(var17, (double[]){0.014977973568281937, 0.9850220264317181}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[5] <= 0.01916597504168749) {
            if (input[1] <= 1.3994210362434387) {
                if (input[4] <= 0.32973940670490265) {
                    if (input[4] <= -0.3076794296503067) {
                        if (input[4] <= -0.32213641703128815) {
                            memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var17, (double[]){0.125, 0.875}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[2] <= 1.205931544303894) {
                            if (input[3] <= 1.7764632105827332) {
                                memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[3] <= 1.830029010772705) {
                                    memcpy(var17, (double[]){0.05555555555555555, 0.9444444444444444}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.3257918552036199, 0.6742081447963801}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[1] <= 0.935498982667923) {
                                if (input[5] <= -2.0311771631240845) {
                                    memcpy(var17, (double[]){0.4098360655737705, 0.5901639344262295}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.01098901098901099, 0.989010989010989}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= -3.2083791494369507) {
                                    memcpy(var17, (double[]){0.7959183673469388, 0.20408163265306123}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[1] <= 1.572236955165863) {
                    if (input[5] <= -4.0235724449157715) {
                        if (input[5] <= -4.035254955291748) {
                            if (input[5] <= -4.060530662536621) {
                                if (input[4] <= -0.3221747428178787) {
                                    memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.2647058823529412, 0.7352941176470589}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[5] <= -2.1549240350723267) {
                            memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[5] <= -1.4835719466209412) {
                                if (input[2] <= 1.946524977684021) {
                                    memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.1836734693877551, 0.8163265306122449}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[4] <= 0.2718752771615982) {
                                    memcpy(var17, (double[]){0.17647058823529413, 0.8235294117647058}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 3.0876855850219727) {
                        memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[4] <= 0.3014219403266907) {
                            if (input[5] <= -4.0584893226623535) {
                                if (input[4] <= -0.3272990584373474) {
                                    memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[5] <= 0.32643967866897583) {
                if (input[4] <= 0.9198592603206635) {
                    if (input[0] <= 0.015928193926811218) {
                        if (input[5] <= 0.0535784475505352) {
                            if (input[1] <= 1.4549258947372437) {
                                if (input[2] <= 0.29315270483493805) {
                                    memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.21052631578947367, 0.7894736842105263}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[1] <= 1.37776118516922) {
                                if (input[4] <= -0.29500871896743774) {
                                    memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.4262295081967213, 0.5737704918032787}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 0.015928193926811218) {
                        memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 0.015928193926811218) {
                    if (input[3] <= 1.835105061531067) {
                        if (input[3] <= 1.0045475959777832) {
                            if (input[5] <= 0.5643444657325745) {
                                if (input[2] <= -0.28787456452846527) {
                                    memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.025, 0.975}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var17, (double[]){0.05, 0.95}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[1] <= -0.023298318963497877) {
                                if (input[5] <= 0.5608035922050476) {
                                    memcpy(var17, (double[]){0.1414141414141414, 0.8585858585858586}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= 1.3349472880363464) {
                                    memcpy(var17, (double[]){0.011940298507462687, 0.9880597014925373}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.45454545454545453, 0.5454545454545454}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[1] <= 1.2722463607788086) {
                            if (input[2] <= -0.5355503261089325) {
                                if (input[1] <= 0.05677804537117481) {
                                    memcpy(var17, (double[]){0.2097902097902098, 0.7902097902097902}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= 0.3870318830013275) {
                                    memcpy(var17, (double[]){0.059322033898305086, 0.940677966101695}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[4] <= 1.2381616830825806) {
                                if (input[2] <= -0.4009385406970978) {
                                    memcpy(var17, (double[]){0.7419354838709677, 0.25806451612903225}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.9894736842105263, 0.010526315789473684}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= 1.3707470297813416) {
                                    memcpy(var17, (double[]){0.25, 0.75}, 2 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var14, var17, 2, var13);
    double var18[2];
    if (input[5] <= 0.01777677983045578) {
        if (input[0] <= -0.32487861812114716) {
            memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            if (input[4] <= -0.3220805525779724) {
                if (input[2] <= 0.9864866733551025) {
                    if (input[3] <= -1.4254193305969238) {
                        if (input[5] <= -0.4722011685371399) {
                            memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[1] <= 1.114805907011032) {
                                if (input[4] <= -0.9259073734283447) {
                                    memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){0.08823529411764706, 0.9117647058823529}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 0.9916629493236542) {
                        if (input[4] <= -0.5542602837085724) {
                            memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var18, (double[]){0.05, 0.95}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 0.6589401662349701) {
                    if (input[3] <= -1.4431049823760986) {
                        if (input[5] <= -0.01829793956130743) {
                            if (input[1] <= 1.0209600329399109) {
                                if (input[2] <= 0.5097900480031967) {
                                    memcpy(var18, (double[]){0.84, 0.16}, 2 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){0.010309278350515464, 0.9896907216494846}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[1] <= 1.284331351518631) {
                                memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[3] <= 1.8350299000740051) {
                            if (input[4] <= 0.3286920189857483) {
                                if (input[3] <= -1.0377459526062012) {
                                    memcpy(var18, (double[]){0.21052631578947367, 0.7894736842105263}, 2 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){0.8414634146341463, 0.15853658536585366}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[1] <= 1.3547895550727844) {
                                if (input[4] <= -0.19776125252246857) {
                                    memcpy(var18, (double[]){0.21428571428571427, 0.7857142857142857}, 2 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){0.01639344262295082, 0.9836065573770492}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[2] <= 3.087706208229065) {
                        if (input[2] <= 2.0543545484542847) {
                            if (input[4] <= 0.32902655005455017) {
                                if (input[3] <= 1.683125913143158) {
                                    memcpy(var18, (double[]){0.7523939808481532, 0.2476060191518468}, 2 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){0.47477064220183485, 0.5252293577981652}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= 1.5097418427467346) {
                                    memcpy(var18, (double[]){0.005912786400591279, 0.9940872135994088}, 2 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[2] <= 3.087686061859131) {
                                memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[4] <= 0.3449172377586365) {
                                    memcpy(var18, (double[]){0.5454545454545454, 0.45454545454545453}, 2 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[1] <= 0.9985728859901428) {
                            if (input[4] <= 0.31514255702495575) {
                                if (input[1] <= -1.1498359739780426) {
                                    memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[4] <= 0.3289264589548111) {
                                if (input[2] <= 3.1018542051315308) {
                                    memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){0.9084967320261438, 0.0915032679738562}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[1] <= 0.7397797107696533) {
            if (input[0] <= -0.32487861812114716) {
                memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[3] <= 1.5956529378890991) {
                    if (input[0] <= 0.015928193926811218) {
                        if (input[1] <= 0.09458168968558311) {
                            if (input[5] <= 0.48726464807987213) {
                                memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[1] <= -0.4556152671575546) {
                                    memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){0.1592920353982301, 0.8407079646017699}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[2] <= -0.4844806343317032) {
                                if (input[5] <= 0.48781880736351013) {
                                    memcpy(var18, (double[]){0.06896551724137931, 0.9310344827586207}, 2 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 0.5219020545482635) {
                        if (input[1] <= -0.5383990705013275) {
                            if (input[1] <= -0.6472797393798828) {
                                memcpy(var18, (double[]){0.08, 0.92}, 2 * sizeof(double));
                            } else {
                                memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[2] <= -0.5094220787286758) {
                                if (input[3] <= 1.7936798334121704) {
                                    memcpy(var18, (double[]){0.10416666666666667, 0.8958333333333334}, 2 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){0.5348837209302325, 0.46511627906976744}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= -0.0853259265422821) {
                                    memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 1.7102731764316559) {
                            memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[5] <= 0.4757860004901886) {
                                memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if (input[4] <= 0.32602134346961975) {
                if (input[5] <= 0.2839784473180771) {
                    if (input[5] <= 0.15344257652759552) {
                        if (input[4] <= -0.3259291648864746) {
                            if (input[4] <= -1.3751077055931091) {
                                memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[5] <= 0.12139299884438515) {
                                    memcpy(var18, (double[]){0.1111111111111111, 0.8888888888888888}, 2 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[1] <= 0.9328388273715973) {
                                if (input[2] <= 0.19769658148288727) {
                                    memcpy(var18, (double[]){0.75, 0.25}, 2 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[5] <= 0.20205146074295044) {
                            if (input[3] <= 0.9110766351222992) {
                                if (input[2] <= 0.10816385596990585) {
                                    memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){0.75, 0.25}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[1] <= 0.8989698886871338) {
                                if (input[1] <= 0.823390543460846) {
                                    memcpy(var18, (double[]){0.8225806451612904, 0.1774193548387097}, 2 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){0.23214285714285715, 0.7678571428571429}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[1] <= 1.4594756364822388) {
                        if (input[0] <= -0.32487861812114716) {
                            memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[4] <= -0.32500168681144714) {
                                if (input[5] <= 0.40303176641464233) {
                                    memcpy(var18, (double[]){0.007978723404255319, 0.9920212765957447}, 2 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){0.04713804713804714, 0.9528619528619529}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[3] <= -1.2461573481559753) {
                                    memcpy(var18, (double[]){0.12658227848101267, 0.8734177215189873}, 2 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){0.8333333333333334, 0.16666666666666666}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[5] <= 0.4293665885925293) {
                            memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[1] <= 1.4799340963363647) {
                                memcpy(var18, (double[]){0.1875, 0.8125}, 2 * sizeof(double));
                            } else {
                                memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[1] <= 1.4787694215774536) {
                    if (input[1] <= 0.8603422045707703) {
                        if (input[5] <= 0.3810455650091171) {
                            if (input[2] <= 0.05612192302942276) {
                                if (input[2] <= -0.04485431872308254) {
                                    memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){0.0784313725490196, 0.9215686274509803}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[0] <= -0.32487861812114716) {
                                memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var18, (double[]){0.18181818181818182, 0.8181818181818182}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[5] <= 0.46312059462070465) {
                            if (input[4] <= 0.7959030568599701) {
                                if (input[4] <= 0.7602656483650208) {
                                    memcpy(var18, (double[]){0.0634648370497427, 0.9365351629502573}, 2 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){0.45454545454545453, 0.5454545454545454}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[3] <= 0.1261938251554966) {
                                    memcpy(var18, (double[]){0.030042918454935622, 0.9699570815450643}, 2 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){0.004424778761061947, 0.995575221238938}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var13, var18, 2, var12);
    double var19[2];
    if (input[5] <= 0.019828754477202892) {
        if (input[2] <= 1.029210388660431) {
            if (input[0] <= -0.32487861812114716) {
                memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[1] <= 1.506696343421936) {
                    if (input[1] <= 0.7142137587070465) {
                        if (input[4] <= 0.11347048729658127) {
                            if (input[1] <= 0.7116813659667969) {
                                memcpy(var19, (double[]){0.5, 0.5}, 2 * sizeof(double));
                            } else {
                                memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[4] <= 1.7732533812522888) {
                            if (input[3] <= 0.6507229208946228) {
                                if (input[1] <= 1.0054587125778198) {
                                    memcpy(var19, (double[]){0.06537282941777324, 0.9346271705822268}, 2 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.14408233276157806, 0.855917667238422}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[4] <= 0.32179902493953705) {
                                    memcpy(var19, (double[]){0.07889546351084813, 0.9211045364891519}, 2 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[1] <= 1.291808009147644) {
                if (input[1] <= 0.970601886510849) {
                    if (input[1] <= 0.782301515340805) {
                        if (input[1] <= 0.054883675649762154) {
                            if (input[1] <= 0.046427685767412186) {
                                if (input[1] <= -0.3378917872905731) {
                                    memcpy(var19, (double[]){0.01567398119122257, 0.9843260188087775}, 2 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var19, (double[]){0.4375, 0.5625}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[3] <= -0.8566146790981293) {
                                if (input[1] <= 0.6720256209373474) {
                                    memcpy(var19, (double[]){0.06818181818181818, 0.9318181818181818}, 2 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= 1.298944890499115) {
                                    memcpy(var19, (double[]){0.023255813953488372, 0.9767441860465116}, 2 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.0005564830272676684, 0.9994435169727324}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 1.0719842910766602) {
                            memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[1] <= 0.7892335653305054) {
                                if (input[2] <= 2.0543372631073) {
                                    memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.3, 0.7}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= 1.2007224559783936) {
                                    memcpy(var19, (double[]){0.09652509652509653, 0.9034749034749034}, 2 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.012041284403669725, 0.9879587155963303}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 1.8643869161605835) {
                        if (input[5] <= -1.731066882610321) {
                            if (input[2] <= 1.860377848148346) {
                                memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var19, (double[]){0.5555555555555556, 0.4444444444444444}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[4] <= -0.3225761502981186) {
                                memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[4] <= 0.3291926085948944) {
                                    memcpy(var19, (double[]){0.92, 0.08}, 2 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.01002004008016032, 0.9899799599198397}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[3] <= -1.3639364838600159) {
                            if (input[5] <= -1.800584614276886) {
                                if (input[2] <= 2.0085160732269287) {
                                    memcpy(var19, (double[]){0.06382978723404255, 0.9361702127659575}, 2 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[1] <= 0.9745318293571472) {
                                memcpy(var19, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                            } else {
                                if (input[5] <= -1.8010578751564026) {
                                    memcpy(var19, (double[]){0.052749719416386086, 0.9472502805836139}, 2 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[2] <= 3.087686061859131) {
                    if (input[5] <= -1.9681791067123413) {
                        memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[2] <= 1.3416748046875) {
                            memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[3] <= -1.1183487176895142) {
                                if (input[2] <= 1.991350531578064) {
                                    memcpy(var19, (double[]){0.043478260869565216, 0.9565217391304348}, 2 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[3] <= -0.5490408837795258) {
                                    memcpy(var19, (double[]){0.4, 0.6}, 2 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.15406162464985995, 0.84593837535014}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 3.090363383293152) {
                        if (input[2] <= 3.0879348516464233) {
                            if (input[4] <= 0.24045346677303314) {
                                memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[1] <= 1.5418526530265808) {
                                memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var19, (double[]){0.09523809523809523, 0.9047619047619048}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[4] <= -0.3221747428178787) {
                            memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[5] <= -4.0584893226623535) {
                                if (input[1] <= 1.5578660368919373) {
                                    memcpy(var19, (double[]){0.21030042918454936, 0.7896995708154506}, 2 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[4] <= 0.25963325798511505) {
                                    memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[4] <= 0.3382522612810135) {
            if (input[1] <= 0.7465828359127045) {
                if (input[3] <= 1.5985476970672607) {
                    if (input[5] <= 0.5241613686084747) {
                        if (input[4] <= 0.07602212950587273) {
                            memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[5] <= 0.27608031034469604) {
                                if (input[2] <= -0.053925298154354095) {
                                    memcpy(var19, (double[]){0.8333333333333334, 0.16666666666666666}, 2 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[0] <= -0.32487861812114716) {
                            memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[4] <= -0.5489535927772522) {
                                if (input[3] <= 0.22260434925556183) {
                                    memcpy(var19, (double[]){0.6510638297872341, 0.34893617021276596}, 2 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.16862745098039217, 0.8313725490196079}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= -0.7696375548839569) {
                                    memcpy(var19, (double[]){0.9699924981245311, 0.030007501875468866}, 2 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.6385542168674698, 0.3614457831325301}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[5] <= 0.5013704150915146) {
                        memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[4] <= -0.18153845518827438) {
                            if (input[1] <= -0.5305671393871307) {
                                memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[2] <= -0.8486807644367218) {
                                    memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.4444444444444444, 0.5555555555555556}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var19, (double[]){0.3076923076923077, 0.6923076923076923}, 2 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[4] <= -0.3291037380695343) {
                    if (input[4] <= -1.1210363507270813) {
                        if (input[1] <= 1.294491946697235) {
                            if (input[3] <= -0.2785815317183733) {
                                memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var19, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[5] <= 0.4302060157060623) {
                            if (input[0] <= 0.015928193926811218) {
                                if (input[3] <= 1.828195035457611) {
                                    memcpy(var19, (double[]){0.024935511607910577, 0.9750644883920895}, 2 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.24, 0.76}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[5] <= 0.20170803368091583) {
                        if (input[4] <= -0.23263191431760788) {
                            if (input[5] <= 0.12223568186163902) {
                                memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var19, (double[]){0.4444444444444444, 0.5555555555555556}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[3] <= -1.3930438160896301) {
                            memcpy(var19, (double[]){0.48518518518518516, 0.5148148148148148}, 2 * sizeof(double));
                        } else {
                            if (input[4] <= 0.3015720844268799) {
                                if (input[1] <= 1.3975383043289185) {
                                    memcpy(var19, (double[]){0.8229665071770335, 0.17703349282296652}, 2 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.9932885906040269, 0.006711409395973154}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var19, (double[]){0.5454545454545454, 0.45454545454545453}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if (input[0] <= -0.32487861812114716) {
                memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[2] <= -0.7190659642219543) {
                    memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[1] <= 0.7475039064884186) {
                        if (input[0] <= 0.015928193926811218) {
                            if (input[3] <= 0.6821416616439819) {
                                if (input[5] <= 0.4720999151468277) {
                                    memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.22043010752688172, 0.7795698924731183}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= -0.564294695854187) {
                                    memcpy(var19, (double[]){0.33636363636363636, 0.6636363636363637}, 2 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[1] <= 1.4721461534500122) {
                            if (input[0] <= 0.015928193926811218) {
                                if (input[3] <= 1.835105061531067) {
                                    memcpy(var19, (double[]){0.025202520252025202, 0.9747974797479748}, 2 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.09248554913294797, 0.9075144508670521}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                }
            }
        }
    }
    add_vectors(var12, var19, 2, var11);
    double var20[2];
    if (input[1] <= 0.5519349277019501) {
        if (input[2] <= 2.0761483311653137) {
            if (input[2] <= -0.5347365736961365) {
                if (input[1] <= -0.6604137718677521) {
                    memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[0] <= 0.015928193926811218) {
                        if (input[4] <= -2.167174220085144) {
                            memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[1] <= 0.09315481781959534) {
                                if (input[5] <= 0.4734271615743637) {
                                    memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var20, (double[]){0.28399122807017546, 0.7160087719298246}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[3] <= -0.7197472751140594) {
                                    memcpy(var20, (double[]){0.37373737373737376, 0.6262626262626263}, 2 * sizeof(double));
                                } else {
                                    memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= -0.08066580444574356) {
                    if (input[2] <= -0.3479551374912262) {
                        if (input[1] <= -0.3697720170021057) {
                            if (input[2] <= -0.42187438905239105) {
                                if (input[4] <= 0.7505229115486145) {
                                    memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var20, (double[]){0.8853046594982079, 0.11469534050179211}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[3] <= 0.994019515812397) {
                                    memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[3] <= 1.5794009566307068) {
                            memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[1] <= 0.05534600466489792) {
                if (input[1] <= 0.048059431836009026) {
                    if (input[4] <= 0.24935654550790787) {
                        if (input[4] <= -0.2051955610513687) {
                            if (input[1] <= -0.34165051579475403) {
                                memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[1] <= -0.32447925209999084) {
                                    memcpy(var20, (double[]){0.037037037037037035, 0.9629629629629629}, 2 * sizeof(double));
                                } else {
                                    memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[1] <= -0.4889112859964371) {
                                memcpy(var20, (double[]){0.23529411764705882, 0.7647058823529411}, 2 * sizeof(double));
                            } else {
                                memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var20, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                }
            } else {
                memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[1] <= 1.5266942381858826) {
            if (input[0] <= 0.015928193926811218) {
                if (input[1] <= 1.3538958430290222) {
                    if (input[0] <= -0.32487861812114716) {
                        memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[1] <= 1.1359345316886902) {
                            if (input[2] <= -0.5283619463443756) {
                                memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[5] <= -1.317396879196167) {
                                    memcpy(var20, (double[]){0.02969061876247505, 0.970309381237525}, 2 * sizeof(double));
                                } else {
                                    memcpy(var20, (double[]){0.06283264340626848, 0.9371673565937315}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[2] <= -0.47383198142051697) {
                                memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[2] <= 1.8643869161605835) {
                                    memcpy(var20, (double[]){0.151092809629395, 0.848907190370605}, 2 * sizeof(double));
                                } else {
                                    memcpy(var20, (double[]){0.05741216795201371, 0.9425878320479862}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 3.0821943283081055) {
                        if (input[3] <= 1.8363096117973328) {
                            if (input[3] <= -1.4254193305969238) {
                                if (input[4] <= -0.8900439441204071) {
                                    memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var20, (double[]){0.4375, 0.5625}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= 1.364959955215454) {
                                    memcpy(var20, (double[]){0.24, 0.76}, 2 * sizeof(double));
                                } else {
                                    memcpy(var20, (double[]){0.020348837209302327, 0.9796511627906976}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[5] <= -1.957909107208252) {
                                memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[5] <= -0.2981032729148865) {
                                    memcpy(var20, (double[]){0.27167630057803466, 0.7283236994219653}, 2 * sizeof(double));
                                } else {
                                    memcpy(var20, (double[]){0.8648648648648649, 0.13513513513513514}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 0.30486083030700684) {
                            if (input[5] <= -4.056338787078857) {
                                if (input[4] <= -0.3220731019973755) {
                                    memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                }
            } else {
                memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[4] <= 0.3324499577283859) {
                if (input[5] <= -4.058438062667847) {
                    if (input[1] <= 1.5344980359077454) {
                        memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[1] <= 1.6353816390037537) {
                            if (input[4] <= -0.325251042842865) {
                                memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var20, (double[]){0.7142857142857143, 0.2857142857142857}, 2 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[4] <= 0.5828885436058044) {
                    if (input[5] <= -2.47293683886528) {
                        memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var11, var20, 2, var10);
    double var21[2];
    if (input[2] <= 0.9169205725193024) {
        if (input[0] <= -0.32487861812114716) {
            memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            if (input[0] <= 0.015928193926811218) {
                if (input[3] <= -1.4431049823760986) {
                    if (input[2] <= 0.06664504483342171) {
                        if (input[2] <= 0.04397142678499222) {
                            if (input[5] <= 0.3391174226999283) {
                                if (input[4] <= 0.1929628923535347) {
                                    memcpy(var21, (double[]){0.7619047619047619, 0.23809523809523808}, 2 * sizeof(double));
                                } else {
                                    memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= 1.412460744380951) {
                                    memcpy(var21, (double[]){0.19617224880382775, 0.8038277511961722}, 2 * sizeof(double));
                                } else {
                                    memcpy(var21, (double[]){0.963302752293578, 0.03669724770642202}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[1] <= 1.2662545442581177) {
                                memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[2] <= 0.8891926407814026) {
                            if (input[2] <= 0.18467415869235992) {
                                if (input[1] <= 1.317855417728424) {
                                    memcpy(var21, (double[]){0.5555555555555556, 0.4444444444444444}, 2 * sizeof(double));
                                } else {
                                    memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= 0.21353911608457565) {
                                    memcpy(var21, (double[]){0.24242424242424243, 0.7575757575757576}, 2 * sizeof(double));
                                } else {
                                    memcpy(var21, (double[]){0.6346911957950065, 0.36530880420499345}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var21, (double[]){0.030303030303030304, 0.9696969696969697}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[1] <= 1.4570271968841553) {
                        if (input[1] <= 0.49315060675144196) {
                            if (input[1] <= 0.12941357493400574) {
                                if (input[2] <= -0.5727466642856598) {
                                    memcpy(var21, (double[]){0.16869300911854104, 0.831306990881459}, 2 * sizeof(double));
                                } else {
                                    memcpy(var21, (double[]){0.32710280373831774, 0.6728971962616822}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= 0.3810056298971176) {
                                    memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var21, (double[]){0.9142857142857143, 0.08571428571428572}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[4] <= 3.4451314210891724) {
                                if (input[4] <= -0.3219556510448456) {
                                    memcpy(var21, (double[]){0.00827165868524162, 0.9917283413147584}, 2 * sizeof(double));
                                } else {
                                    memcpy(var21, (double[]){0.13383177570093457, 0.8661682242990654}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[3] <= 1.6695481538772583) {
                            memcpy(var21, (double[]){0.13333333333333333, 0.8666666666666667}, 2 * sizeof(double));
                        } else {
                            if (input[4] <= -0.3309093415737152) {
                                if (input[1] <= 1.5105111598968506) {
                                    memcpy(var21, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                } else {
                                    memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[0] <= -0.32487861812114716) {
            memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            if (input[4] <= -0.32215847074985504) {
                if (input[4] <= -0.3677618056535721) {
                    if (input[2] <= 0.9612847566604614) {
                        memcpy(var21, (double[]){0.5, 0.5}, 2 * sizeof(double));
                    } else {
                        if (input[5] <= -0.6013272702693939) {
                            memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[5] <= -0.599847286939621) {
                                memcpy(var21, (double[]){0.08, 0.92}, 2 * sizeof(double));
                            } else {
                                if (input[1] <= 0.9374757707118988) {
                                    memcpy(var21, (double[]){0.08333333333333333, 0.9166666666666666}, 2 * sizeof(double));
                                } else {
                                    memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[5] <= -0.6321457028388977) {
                        memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var21, (double[]){0.1111111111111111, 0.8888888888888888}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[4] <= 0.32902655005455017) {
                    if (input[1] <= 0.9884097874164581) {
                        if (input[2] <= 2.0543404817581177) {
                            if (input[3] <= 1.6922780275344849) {
                                if (input[2] <= 1.386350929737091) {
                                    memcpy(var21, (double[]){0.5555555555555556, 0.4444444444444444}, 2 * sizeof(double));
                                } else {
                                    memcpy(var21, (double[]){0.25925925925925924, 0.7407407407407407}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var21, (double[]){0.03389830508474576, 0.9661016949152542}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[3] <= 1.697221040725708) {
                                memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[4] <= 0.2678948640823364) {
                                    memcpy(var21, (double[]){0.2916666666666667, 0.7083333333333334}, 2 * sizeof(double));
                                } else {
                                    memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[1] <= 1.2373226284980774) {
                            if (input[2] <= 1.0694391131401062) {
                                if (input[1] <= 1.1274875402450562) {
                                    memcpy(var21, (double[]){0.7272727272727273, 0.2727272727272727}, 2 * sizeof(double));
                                } else {
                                    memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[3] <= 0.36776702105998993) {
                                if (input[3] <= -0.1349114403128624) {
                                    memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var21, (double[]){0.1, 0.9}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= 1.2700660824775696) {
                                    memcpy(var21, (double[]){0.7708333333333334, 0.22916666666666666}, 2 * sizeof(double));
                                } else {
                                    memcpy(var21, (double[]){0.9976133651551312, 0.002386634844868735}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 1.2813178300857544) {
                        if (input[2] <= 1.2496554851531982) {
                            if (input[1] <= 1.2001035809516907) {
                                if (input[5] <= -0.6439299285411835) {
                                    memcpy(var21, (double[]){0.02495201535508637, 0.9750479846449136}, 2 * sizeof(double));
                                } else {
                                    memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= -0.722858339548111) {
                                    memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var10, var21, 2, var9);
    double var22[2];
    if (input[5] <= 0.019828754477202892) {
        if (input[2] <= 1.029210388660431) {
            if (input[1] <= 0.7103190422058105) {
                memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[1] <= 1.5056935548782349) {
                    if (input[4] <= -1.6137746572494507) {
                        memcpy(var22, (double[]){0.875, 0.125}, 2 * sizeof(double));
                    } else {
                        if (input[4] <= -0.3201509118080139) {
                            if (input[4] <= -1.4938230514526367) {
                                memcpy(var22, (double[]){0.08695652173913043, 0.9130434782608695}, 2 * sizeof(double));
                            } else {
                                if (input[5] <= -0.5801457762718201) {
                                    memcpy(var22, (double[]){0.0163265306122449, 0.9836734693877551}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[4] <= 0.32179902493953705) {
                                if (input[2] <= 0.3548077642917633) {
                                    memcpy(var22, (double[]){0.06451612903225806, 0.9354838709677419}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){0.5011337868480725, 0.4988662131519274}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[3] <= -1.426644742488861) {
                                    memcpy(var22, (double[]){0.05181347150259067, 0.9481865284974094}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[1] <= 1.3991191387176514) {
                if (input[3] <= 1.7853007316589355) {
                    if (input[4] <= -0.3220805525779724) {
                        memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[4] <= 0.32210013270378113) {
                            if (input[1] <= 0.9884183704853058) {
                                if (input[4] <= 0.11440309882164001) {
                                    memcpy(var22, (double[]){0.23577235772357724, 0.7642276422764228}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){0.75, 0.25}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= -0.6658735275268555) {
                                    memcpy(var22, (double[]){0.9691358024691358, 0.030864197530864196}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){0.6, 0.4}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[2] <= 1.09199059009552) {
                                if (input[5] <= -0.6555346548557281) {
                                    memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= -0.8879343867301941) {
                                    memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){0.04391891891891892, 0.956081081081081}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[5] <= -3.460691809654236) {
                        if (input[1] <= 0.9575580060482025) {
                            if (input[4] <= 0.333814799785614) {
                                if (input[4] <= -0.3169451504945755) {
                                    memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[4] <= -0.3207257091999054) {
                                memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[4] <= 0.33122536540031433) {
                                    memcpy(var22, (double[]){0.8899082568807339, 0.11009174311926606}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 0.3290272206068039) {
                            if (input[2] <= 2.0549137592315674) {
                                if (input[4] <= -0.295595720410347) {
                                    memcpy(var22, (double[]){0.008130081300813009, 0.991869918699187}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){0.4810606060606061, 0.5189393939393939}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[5] <= -4.024574041366577) {
                    if (input[4] <= 0.3242073506116867) {
                        if (input[2] <= 3.1014920473098755) {
                            memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[1] <= 1.516672670841217) {
                                if (input[1] <= 1.4366647601127625) {
                                    memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){0.13740458015267176, 0.8625954198473282}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[4] <= -0.3201376348733902) {
                                    memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[5] <= -2.1571118235588074) {
                        memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[3] <= -1.1988961696624756) {
                            if (input[4] <= 0.20569702237844467) {
                                memcpy(var22, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                            } else {
                                memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[5] <= -1.8878721594810486) {
                                if (input[5] <= -1.9461048245429993) {
                                    memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){0.11666666666666667, 0.8833333333333333}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[4] <= 0.2716144025325775) {
                                    memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){0.125, 0.875}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[4] <= 0.33829620480537415) {
            if (input[1] <= 0.7465835809707642) {
                if (input[4] <= -0.46328940987586975) {
                    if (input[5] <= 0.5181028246879578) {
                        memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[3] <= 0.2235255166888237) {
                            if (input[2] <= -0.9010395705699921) {
                                if (input[2] <= -0.9800015687942505) {
                                    memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){0.8275862068965517, 0.1724137931034483}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= 0.5333970785140991) {
                                    memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){0.452991452991453, 0.5470085470085471}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[4] <= -2.196306586265564) {
                                memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[1] <= -0.5305671393871307) {
                                    memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){0.14383561643835616, 0.8561643835616438}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[5] <= 0.5051594376564026) {
                        memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[2] <= -0.7699488401412964) {
                            if (input[1] <= 0.05645334720611572) {
                                memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[3] <= 0.2594330161809921) {
                                    memcpy(var22, (double[]){0.9105691056910569, 0.08943089430894309}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){0.13333333333333333, 0.8666666666666667}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[3] <= 1.3068536818027496) {
                                if (input[4] <= -0.35099537670612335) {
                                    memcpy(var22, (double[]){0.08, 0.92}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){0.9377593360995851, 0.06224066390041494}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var22, (double[]){0.047619047619047616, 0.9523809523809523}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[2] <= -0.07421282306313515) {
                    if (input[1] <= 1.4570271968841553) {
                        if (input[5] <= 0.4299570471048355) {
                            if (input[4] <= -0.30047111213207245) {
                                if (input[5] <= 0.3737311065196991) {
                                    memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){0.05564924114671164, 0.9443507588532883}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= 0.8942113518714905) {
                                    memcpy(var22, (double[]){0.13978494623655913, 0.8602150537634409}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){0.7341772151898734, 0.26582278481012656}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[3] <= -0.5410244166851044) {
                            memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[5] <= 0.42921724915504456) {
                                memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[1] <= 1.7793746590614319) {
                                    memcpy(var22, (double[]){0.2, 0.8}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= -0.3290368914604187) {
                        if (input[0] <= 0.015928193926811218) {
                            if (input[0] <= -0.3411075174808502) {
                                memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[1] <= 1.2691763639450073) {
                                    memcpy(var22, (double[]){0.017316017316017316, 0.9826839826839827}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[5] <= 0.20185274630784988) {
                            if (input[1] <= 0.9327497482299805) {
                                if (input[4] <= -0.21954084187746048) {
                                    memcpy(var22, (double[]){0.4444444444444444, 0.5555555555555556}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[0] <= 0.015928193926811218) {
                                if (input[1] <= 0.8985858857631683) {
                                    memcpy(var22, (double[]){0.15853658536585366, 0.8414634146341463}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if (input[0] <= -0.32487861812114716) {
                memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[2] <= -0.7168827652931213) {
                    memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[1] <= 0.7562005519866943) {
                        if (input[3] <= 1.83157616853714) {
                            if (input[4] <= 0.9616344571113586) {
                                if (input[2] <= -0.6962359547615051) {
                                    memcpy(var22, (double[]){0.13793103448275862, 0.8620689655172413}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){0.9973544973544973, 0.0026455026455026454}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[0] <= 0.015928193926811218) {
                                    memcpy(var22, (double[]){0.29707112970711297, 0.702928870292887}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[5] <= 0.4862459748983383) {
                                memcpy(var22, (double[]){0.014492753623188406, 0.9855072463768116}, 2 * sizeof(double));
                            } else {
                                if (input[1] <= -0.07204794511198997) {
                                    memcpy(var22, (double[]){0.35135135135135137, 0.6486486486486487}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 2.4805383682250977) {
                            if (input[1] <= 1.4721461534500122) {
                                if (input[3] <= 1.4778302907943726) {
                                    memcpy(var22, (double[]){0.009164969450101833, 0.9908350305498982}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){0.13970588235294118, 0.8602941176470589}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[5] <= 0.46500803530216217) {
                                if (input[1] <= 1.3710460662841797) {
                                    memcpy(var22, (double[]){0.4, 0.6}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            }
        }
    }
    add_vectors(var9, var22, 2, var8);
    double var23[2];
    if (input[2] <= 0.917009562253952) {
        if (input[0] <= -0.32487861812114716) {
            memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            if (input[1] <= 0.7104231417179108) {
                if (input[0] <= 0.015928193926811218) {
                    if (input[3] <= 0.6115866005420685) {
                        if (input[1] <= -0.34967681765556335) {
                            memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[5] <= 0.4607291519641876) {
                                memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[1] <= 0.5371669232845306) {
                                    memcpy(var23, (double[]){0.20647773279352227, 0.7935222672064778}, 2 * sizeof(double));
                                } else {
                                    memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[2] <= -0.5621705949306488) {
                            if (input[4] <= 2.1658895015716553) {
                                if (input[1] <= -0.265050932765007) {
                                    memcpy(var23, (double[]){0.24516129032258063, 0.7548387096774194}, 2 * sizeof(double));
                                } else {
                                    memcpy(var23, (double[]){0.09743589743589744, 0.9025641025641026}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[2] <= 0.6573063731193542) {
                    if (input[4] <= -0.3283444494009018) {
                        if (input[4] <= -1.242187261581421) {
                            memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[1] <= 1.4857684969902039) {
                                if (input[2] <= 0.24636177718639374) {
                                    memcpy(var23, (double[]){0.03436714165968147, 0.9656328583403185}, 2 * sizeof(double));
                                } else {
                                    memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[4] <= 0.32602134346961975) {
                            if (input[2] <= -0.21344653517007828) {
                                if (input[3] <= 0.4751836657524109) {
                                    memcpy(var23, (double[]){0.38666666666666666, 0.6133333333333333}, 2 * sizeof(double));
                                } else {
                                    memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= -0.13143976777791977) {
                                    memcpy(var23, (double[]){0.6454183266932271, 0.3545816733067729}, 2 * sizeof(double));
                                } else {
                                    memcpy(var23, (double[]){0.8875739644970414, 0.11242603550295859}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[0] <= 0.015928193926811218) {
                                if (input[1] <= 1.4721461534500122) {
                                    memcpy(var23, (double[]){0.04365904365904366, 0.9563409563409564}, 2 * sizeof(double));
                                } else {
                                    memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[1] <= 1.284690260887146) {
                        if (input[1] <= 0.8226321339607239) {
                            if (input[3] <= 1.5350703001022339) {
                                if (input[3] <= -0.48766495287418365) {
                                    memcpy(var23, (double[]){0.11594202898550725, 0.8840579710144928}, 2 * sizeof(double));
                                } else {
                                    memcpy(var23, (double[]){0.8181818181818182, 0.18181818181818182}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[4] <= 0.3051300495862961) {
                                if (input[4] <= -0.3147544264793396) {
                                    memcpy(var23, (double[]){0.004739336492890996, 0.995260663507109}, 2 * sizeof(double));
                                } else {
                                    memcpy(var23, (double[]){0.9452054794520548, 0.0547945205479452}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[2] <= 1.0520971417427063) {
            if (input[3] <= 0.6136679947376251) {
                if (input[1] <= 0.6862277686595917) {
                    memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[5] <= -0.6627040505409241) {
                        memcpy(var23, (double[]){0.2727272727272727, 0.7272727272727273}, 2 * sizeof(double));
                    } else {
                        if (input[5] <= -0.5758652091026306) {
                            if (input[3] <= -1.4254193305969238) {
                                if (input[2] <= 1.008090078830719) {
                                    memcpy(var23, (double[]){0.8, 0.2}, 2 * sizeof(double));
                                } else {
                                    memcpy(var23, (double[]){0.07936507936507936, 0.9206349206349206}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= 1.1235675811767578) {
                                    memcpy(var23, (double[]){0.006535947712418301, 0.9934640522875817}, 2 * sizeof(double));
                                } else {
                                    memcpy(var23, (double[]){0.02976190476190476, 0.9702380952380952}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[4] <= -0.5819398299790919) {
                                memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[2] <= 1.0063452124595642) {
                    if (input[1] <= 1.2912327647209167) {
                        memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[3] <= 1.8363096117973328) {
                            if (input[5] <= -0.5689580142498016) {
                                memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[4] <= 0.42600198090076447) {
                                    memcpy(var23, (double[]){0.3076923076923077, 0.6923076923076923}, 2 * sizeof(double));
                                } else {
                                    memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[4] <= 0.3777921497821808) {
                                memcpy(var23, (double[]){0.8, 0.2}, 2 * sizeof(double));
                            } else {
                                memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    memcpy(var23, (double[]){0.2, 0.8}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[2] <= 3.1033047437667847) {
                if (input[2] <= 2.0543545484542847) {
                    if (input[4] <= -0.3205997198820114) {
                        memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[5] <= -1.1817996501922607) {
                            if (input[1] <= 0.9715172052383423) {
                                if (input[5] <= -2.011018395423889) {
                                    memcpy(var23, (double[]){0.054945054945054944, 0.945054945054945}, 2 * sizeof(double));
                                } else {
                                    memcpy(var23, (double[]){0.011475409836065573, 0.9885245901639345}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[4] <= 0.3213670700788498) {
                                    memcpy(var23, (double[]){0.843558282208589, 0.15644171779141106}, 2 * sizeof(double));
                                } else {
                                    memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[1] <= 1.184835135936737) {
                                if (input[2] <= 1.079677939414978) {
                                    memcpy(var23, (double[]){0.7333333333333333, 0.26666666666666666}, 2 * sizeof(double));
                                } else {
                                    memcpy(var23, (double[]){0.13346814964610718, 0.8665318503538928}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= -0.991826206445694) {
                                    memcpy(var23, (double[]){0.3904761904761905, 0.6095238095238096}, 2 * sizeof(double));
                                } else {
                                    memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 0.32093600928783417) {
                        memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[4] <= -0.32391948997974396) {
                    memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[4] <= 0.33535104990005493) {
                        if (input[1] <= -1.1498359739780426) {
                            memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[4] <= 0.023276643827557564) {
                                memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[4] <= 0.06744090467691422) {
                                    memcpy(var23, (double[]){0.46153846153846156, 0.5384615384615384}, 2 * sizeof(double));
                                } else {
                                    memcpy(var23, (double[]){0.9540229885057471, 0.04597701149425287}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var8, var23, 2, var7);
    double var24[2];
    if (input[3] <= 0.7111645340919495) {
        if (input[4] <= -0.32217130064964294) {
            if (input[1] <= 0.6158605515956879) {
                if (input[0] <= -0.32487861812114716) {
                    memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[0] <= 0.015928193926811218) {
                        if (input[5] <= 0.5216239094734192) {
                            if (input[4] <= -0.6479637324810028) {
                                memcpy(var24, (double[]){0.8461538461538461, 0.15384615384615385}, 2 * sizeof(double));
                            } else {
                                memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[4] <= -1.8817253112792969) {
                                memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[2] <= -1.0599273443222046) {
                                    memcpy(var24, (double[]){0.30434782608695654, 0.6956521739130435}, 2 * sizeof(double));
                                } else {
                                    memcpy(var24, (double[]){0.10695187165775401, 0.893048128342246}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[4] <= -1.3225356936454773) {
                    if (input[5] <= -0.5653453171253204) {
                        memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= -0.32487861812114716) {
                        memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[1] <= 1.4446121454238892) {
                            if (input[2] <= -0.34467649459838867) {
                                if (input[2] <= -0.3639262467622757) {
                                    memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[3] <= -1.4417824745178223) {
                                    memcpy(var24, (double[]){0.01580135440180587, 0.9841986455981941}, 2 * sizeof(double));
                                } else {
                                    memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var24, (double[]){0.972972972972973, 0.02702702702702703}, 2 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[1] <= 0.6106318235397339) {
                if (input[4] <= 1.7860820293426514) {
                    if (input[3] <= -1.3791844844818115) {
                        if (input[0] <= -0.34922195971012115) {
                            memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[0] <= 0.015928193926811218) {
                                if (input[1] <= -0.29530490934848785) {
                                    memcpy(var24, (double[]){0.16, 0.84}, 2 * sizeof(double));
                                } else {
                                    memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[5] <= 0.5115915536880493) {
                            memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[1] <= 0.09234824404120445) {
                                if (input[5] <= 0.5124737620353699) {
                                    memcpy(var24, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                } else {
                                    memcpy(var24, (double[]){0.9983122362869198, 0.0016877637130801688}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= 0.5707420408725739) {
                                    memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var24, (double[]){0.75, 0.25}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[0] <= -0.32487861812114716) {
                        memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[3] <= -0.4482024908065796) {
                            if (input[5] <= 0.4934667497873306) {
                                if (input[4] <= 3.214996337890625) {
                                    memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var24, (double[]){0.23076923076923078, 0.7692307692307693}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[4] <= 1.9146440625190735) {
                                memcpy(var24, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                            } else {
                                memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[4] <= 0.3257071077823639) {
                    if (input[4] <= 0.022277655079960823) {
                        if (input[2] <= 1.8975441455841064) {
                            if (input[2] <= 0.04739559814333916) {
                                if (input[1] <= 0.8614090383052826) {
                                    memcpy(var24, (double[]){0.2967032967032967, 0.7032967032967034}, 2 * sizeof(double));
                                } else {
                                    memcpy(var24, (double[]){0.89, 0.11}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= 0.9806438088417053) {
                                    memcpy(var24, (double[]){0.3310810810810811, 0.668918918918919}, 2 * sizeof(double));
                                } else {
                                    memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[1] <= 0.9890705347061157) {
                                memcpy(var24, (double[]){0.08823529411764706, 0.9117647058823529}, 2 * sizeof(double));
                            } else {
                                memcpy(var24, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[5] <= 0.3240959495306015) {
                            if (input[1] <= 0.9217239320278168) {
                                if (input[4] <= 0.2064238265156746) {
                                    memcpy(var24, (double[]){0.17796610169491525, 0.8220338983050848}, 2 * sizeof(double));
                                } else {
                                    memcpy(var24, (double[]){0.45652173913043476, 0.5434782608695652}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= 1.2481443881988525) {
                                    memcpy(var24, (double[]){0.9634146341463414, 0.036585365853658534}, 2 * sizeof(double));
                                } else {
                                    memcpy(var24, (double[]){0.7218543046357616, 0.2781456953642384}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[1] <= 0.8942113518714905) {
                                if (input[5] <= 0.4126824885606766) {
                                    memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var24, (double[]){0.38461538461538464, 0.6153846153846154}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= -0.38452163338661194) {
                                    memcpy(var24, (double[]){0.4, 0.6}, 2 * sizeof(double));
                                } else {
                                    memcpy(var24, (double[]){0.7567567567567568, 0.24324324324324326}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[0] <= -0.32487861812114716) {
                        memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[3] <= -1.4392443895339966) {
                            if (input[1] <= 1.2640302181243896) {
                                if (input[1] <= 0.7211389243602753) {
                                    memcpy(var24, (double[]){0.2916666666666667, 0.7083333333333334}, 2 * sizeof(double));
                                } else {
                                    memcpy(var24, (double[]){0.04376657824933687, 0.9562334217506632}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[4] <= 0.8757966756820679) {
                                    memcpy(var24, (double[]){0.6282051282051282, 0.3717948717948718}, 2 * sizeof(double));
                                } else {
                                    memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[4] <= 0.33114178478717804) {
                                memcpy(var24, (double[]){0.08333333333333333, 0.9166666666666666}, 2 * sizeof(double));
                            } else {
                                memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[0] <= 0.015928193926811218) {
            if (input[4] <= 0.32973940670490265) {
                if (input[4] <= -0.312504306435585) {
                    if (input[3] <= 0.8361508250236511) {
                        if (input[4] <= -1.1265865564346313) {
                            memcpy(var24, (double[]){0.08333333333333333, 0.9166666666666666}, 2 * sizeof(double));
                        } else {
                            memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[3] <= 0.8451948761940002) {
                            memcpy(var24, (double[]){0.17391304347826086, 0.8260869565217391}, 2 * sizeof(double));
                        } else {
                            if (input[2] <= -0.13017769902944565) {
                                if (input[1] <= 1.4730047583580017) {
                                    memcpy(var24, (double[]){0.09034907597535935, 0.9096509240246407}, 2 * sizeof(double));
                                } else {
                                    memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= 0.675147294998169) {
                                    memcpy(var24, (double[]){0.009523809523809525, 0.9904761904761905}, 2 * sizeof(double));
                                } else {
                                    memcpy(var24, (double[]){0.000859106529209622, 0.9991408934707904}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[1] <= 0.9360683858394623) {
                        if (input[3] <= 1.663013517856598) {
                            if (input[1] <= 0.7159002721309662) {
                                memcpy(var24, (double[]){0.4444444444444444, 0.5555555555555556}, 2 * sizeof(double));
                            } else {
                                memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[5] <= -3.0593656301498413) {
                                if (input[4] <= 0.16828103363513947) {
                                    memcpy(var24, (double[]){0.3157894736842105, 0.6842105263157895}, 2 * sizeof(double));
                                } else {
                                    memcpy(var24, (double[]){0.5333333333333333, 0.4666666666666667}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[4] <= -0.2713204473257065) {
                                    memcpy(var24, (double[]){0.17647058823529413, 0.8235294117647058}, 2 * sizeof(double));
                                } else {
                                    memcpy(var24, (double[]){0.03861003861003861, 0.9613899613899614}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[4] <= -0.2986181527376175) {
                            if (input[4] <= -0.3050294369459152) {
                                memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[1] <= 1.2380229830741882) {
                                    memcpy(var24, (double[]){0.38461538461538464, 0.6153846153846154}, 2 * sizeof(double));
                                } else {
                                    memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[5] <= -4.0584893226623535) {
                                if (input[1] <= 1.2440043091773987) {
                                    memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var24, (double[]){0.8115942028985508, 0.18840579710144928}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= -0.6802061498165131) {
                                    memcpy(var24, (double[]){0.9941291585127201, 0.005870841487279843}, 2 * sizeof(double));
                                } else {
                                    memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[1] <= 1.7168687582015991) {
                    if (input[5] <= 0.5150467753410339) {
                        if (input[2] <= -0.2344473898410797) {
                            if (input[5] <= 0.3743608146905899) {
                                if (input[2] <= -0.2541160434484482) {
                                    memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var24, (double[]){0.625, 0.375}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= -0.484654039144516) {
                                    memcpy(var24, (double[]){0.23039215686274508, 0.7696078431372549}, 2 * sizeof(double));
                                } else {
                                    memcpy(var24, (double[]){0.03430079155672823, 0.9656992084432717}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var7, var24, 2, var6);
    double var25[2];
    if (input[0] <= -0.32487861812114716) {
        memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
    } else {
        if (input[4] <= 0.32902655005455017) {
            if (input[2] <= 0.468106672167778) {
                if (input[0] <= 0.015928193926811218) {
                    if (input[1] <= 1.4781415462493896) {
                        if (input[3] <= 0.6072482764720917) {
                            if (input[5] <= 0.423491895198822) {
                                if (input[4] <= -0.3238542079925537) {
                                    memcpy(var25, (double[]){0.030706243602865915, 0.9692937563971341}, 2 * sizeof(double));
                                } else {
                                    memcpy(var25, (double[]){0.41284403669724773, 0.5871559633027523}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= 0.056999171152710915) {
                                    memcpy(var25, (double[]){0.24806201550387597, 0.751937984496124}, 2 * sizeof(double));
                                } else {
                                    memcpy(var25, (double[]){0.8167330677290837, 0.18326693227091634}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[2] <= 0.428946778178215) {
                                if (input[1] <= 1.1672207713127136) {
                                    memcpy(var25, (double[]){0.08229426433915212, 0.9177057356608479}, 2 * sizeof(double));
                                } else {
                                    memcpy(var25, (double[]){0.38513513513513514, 0.6148648648648649}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[2] <= 0.859559953212738) {
                    if (input[4] <= -0.3023122549057007) {
                        if (input[4] <= -1.270969033241272) {
                            memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[4] <= -0.32282698154449463) {
                                if (input[3] <= -1.3580082654953003) {
                                    memcpy(var25, (double[]){0.23076923076923078, 0.7692307692307693}, 2 * sizeof(double));
                                } else {
                                    memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var25, (double[]){0.10714285714285714, 0.8928571428571429}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[3] <= 1.7941744923591614) {
                            if (input[1] <= 0.964426577091217) {
                                if (input[1] <= 0.8059772849082947) {
                                    memcpy(var25, (double[]){0.23076923076923078, 0.7692307692307693}, 2 * sizeof(double));
                                } else {
                                    memcpy(var25, (double[]){0.6415094339622641, 0.3584905660377358}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var25, (double[]){0.5642857142857143, 0.4357142857142857}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[5] <= -4.060530662536621) {
                        if (input[1] <= 0.997911125421524) {
                            if (input[1] <= -0.4784555286169052) {
                                if (input[4] <= -0.32093219459056854) {
                                    memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var25, (double[]){0.2903225806451613, 0.7096774193548387}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[4] <= -0.30598586797714233) {
                                    memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[1] <= 1.0743567943572998) {
                                if (input[1] <= 1.0415632128715515) {
                                    memcpy(var25, (double[]){0.1891891891891892, 0.8108108108108109}, 2 * sizeof(double));
                                } else {
                                    memcpy(var25, (double[]){0.525, 0.475}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[4] <= -0.32391948997974396) {
                                    memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var25, (double[]){0.9152542372881356, 0.0847457627118644}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[4] <= -0.31304731965065) {
                            if (input[4] <= -1.5147905945777893) {
                                if (input[1] <= 1.1283493638038635) {
                                    memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var25, (double[]){0.047619047619047616, 0.9523809523809523}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= -0.6087009608745575) {
                                    memcpy(var25, (double[]){0.0025356576862123614, 0.9974643423137877}, 2 * sizeof(double));
                                } else {
                                    memcpy(var25, (double[]){0.013363028953229399, 0.9866369710467706}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[1] <= 0.9884183704853058) {
                                if (input[5] <= -0.8420637249946594) {
                                    memcpy(var25, (double[]){0.1225296442687747, 0.8774703557312253}, 2 * sizeof(double));
                                } else {
                                    memcpy(var25, (double[]){0.27380952380952384, 0.7261904761904762}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= 1.0692443251609802) {
                                    memcpy(var25, (double[]){0.5294117647058824, 0.47058823529411764}, 2 * sizeof(double));
                                } else {
                                    memcpy(var25, (double[]){0.9586877278250304, 0.041312272174969626}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[5] <= 0.11369859054684639) {
                if (input[1] <= 1.6886680722236633) {
                    if (input[2] <= 0.5125974863767624) {
                        if (input[2] <= 0.461545467376709) {
                            if (input[3] <= -0.9609491229057312) {
                                if (input[3] <= -1.283396303653717) {
                                    memcpy(var25, (double[]){0.006289308176100629, 0.9937106918238994}, 2 * sizeof(double));
                                } else {
                                    memcpy(var25, (double[]){0.5087719298245614, 0.49122807017543857}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= 0.0600340124219656) {
                                    memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var25, (double[]){0.01, 0.99}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[1] <= 1.516401469707489) {
                            if (input[5] <= -0.9014569520950317) {
                                memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[5] <= -0.6536335349082947) {
                                    memcpy(var25, (double[]){0.0509433962264151, 0.9490566037735849}, 2 * sizeof(double));
                                } else {
                                    memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[5] <= -2.472006857395172) {
                                memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[0] <= 0.015928193926811218) {
                    if (input[1] <= 1.4721461534500122) {
                        if (input[5] <= 0.46312059462070465) {
                            if (input[4] <= 2.218534827232361) {
                                if (input[2] <= -0.23325024545192719) {
                                    memcpy(var25, (double[]){0.07947019867549669, 0.9205298013245033}, 2 * sizeof(double));
                                } else {
                                    memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= 0.885415256023407) {
                                    memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var25, (double[]){0.3, 0.7}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[5] <= 0.5236730873584747) {
                                if (input[4] <= 3.2742525339126587) {
                                    memcpy(var25, (double[]){0.159375, 0.840625}, 2 * sizeof(double));
                                } else {
                                    memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var6, var25, 2, var5);
    double var26[2];
    if (input[1] <= 0.5207173228263855) {
        if (input[0] <= -0.32487861812114716) {
            memcpy(var26, (double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            if (input[5] <= -2.016043852083385) {
                if (input[4] <= 0.3210650384426117) {
                    if (input[4] <= -0.30598586797714233) {
                        memcpy(var26, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[1] <= -1.1485899090766907) {
                            memcpy(var26, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var26, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var26, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[2] <= -0.534708559513092) {
                    if (input[2] <= -1.0456210374832153) {
                        if (input[5] <= 0.5716674625873566) {
                            if (input[0] <= 0.015928193926811218) {
                                if (input[3] <= 0.15064780041575432) {
                                    memcpy(var26, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var26, (double[]){0.1415929203539823, 0.8584070796460177}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var26, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var26, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[0] <= 0.015928193926811218) {
                            if (input[2] <= -0.5673715472221375) {
                                if (input[3] <= 0.009722273796796799) {
                                    memcpy(var26, (double[]){0.32142857142857145, 0.6785714285714286}, 2 * sizeof(double));
                                } else {
                                    memcpy(var26, (double[]){0.18028846153846154, 0.8197115384615384}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= -0.54680535197258) {
                                    memcpy(var26, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var26, (double[]){0.043478260869565216, 0.9565217391304348}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var26, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[3] <= 1.749758780002594) {
                        memcpy(var26, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var26, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[5] <= -0.2663574665784836) {
            if (input[4] <= 0.32923948764801025) {
                if (input[4] <= -0.31272032856941223) {
                    if (input[1] <= 1.640134036540985) {
                        if (input[4] <= -0.3226403743028641) {
                            if (input[3] <= -1.438871443271637) {
                                if (input[2] <= 1.0149681568145752) {
                                    memcpy(var26, (double[]){0.8, 0.2}, 2 * sizeof(double));
                                } else {
                                    memcpy(var26, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var26, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[2] <= 1.9423903226852417) {
                                memcpy(var26, (double[]){0.5833333333333334, 0.4166666666666667}, 2 * sizeof(double));
                            } else {
                                memcpy(var26, (double[]){0.15, 0.85}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var26, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[5] <= -2.057729721069336) {
                        if (input[2] <= 3.104243278503418) {
                            if (input[5] <= -2.0577510595321655) {
                                memcpy(var26, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var26, (double[]){0.8571428571428571, 0.14285714285714285}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[4] <= 0.2622903138399124) {
                                if (input[1] <= 1.2929908633232117) {
                                    memcpy(var26, (double[]){0.9423076923076923, 0.057692307692307696}, 2 * sizeof(double));
                                } else {
                                    memcpy(var26, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= 1.2159425020217896) {
                                    memcpy(var26, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var26, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[1] <= 0.9885000884532928) {
                            if (input[2] <= 0.9166070520877838) {
                                if (input[5] <= -0.34529557824134827) {
                                    memcpy(var26, (double[]){0.44776119402985076, 0.5522388059701493}, 2 * sizeof(double));
                                } else {
                                    memcpy(var26, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[4] <= 0.13679293543100357) {
                                    memcpy(var26, (double[]){0.12167300380228137, 0.8783269961977186}, 2 * sizeof(double));
                                } else {
                                    memcpy(var26, (double[]){0.359375, 0.640625}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[4] <= 0.31964997947216034) {
                                if (input[5] <= -1.9429720044136047) {
                                    memcpy(var26, (double[]){0.5161290322580645, 0.4838709677419355}, 2 * sizeof(double));
                                } else {
                                    memcpy(var26, (double[]){0.9642365887207703, 0.03576341127922971}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var26, (double[]){0.23809523809523808, 0.7619047619047619}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[5] <= -0.9433826208114624) {
                    memcpy(var26, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[2] <= 1.2507600784301758) {
                        if (input[5] <= -0.648540198802948) {
                            if (input[3] <= -1.3751028776168823) {
                                if (input[1] <= 1.1061879396438599) {
                                    memcpy(var26, (double[]){0.3055555555555556, 0.6944444444444444}, 2 * sizeof(double));
                                } else {
                                    memcpy(var26, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var26, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var26, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var26, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[0] <= 0.015928193926811218) {
                if (input[0] <= -0.32487861812114716) {
                    memcpy(var26, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[2] <= -0.3023584634065628) {
                        if (input[1] <= 1.4781415462493896) {
                            if (input[2] <= -0.5322431027889252) {
                                memcpy(var26, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[3] <= -1.4427839517593384) {
                                    memcpy(var26, (double[]){0.23076923076923078, 0.7692307692307693}, 2 * sizeof(double));
                                } else {
                                    memcpy(var26, (double[]){0.04212454212454213, 0.9578754578754579}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var26, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[5] <= 0.38420119881629944) {
                            if (input[3] <= -1.4431049823760986) {
                                if (input[1] <= 1.1685665249824524) {
                                    memcpy(var26, (double[]){0.07942238267148015, 0.9205776173285198}, 2 * sizeof(double));
                                } else {
                                    memcpy(var26, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= -0.12599782645702362) {
                                    memcpy(var26, (double[]){0.12573673870333987, 0.8742632612966601}, 2 * sizeof(double));
                                } else {
                                    memcpy(var26, (double[]){0.2415603900975244, 0.7584396099024756}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var26, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                }
            } else {
                memcpy(var26, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    }
    add_vectors(var5, var26, 2, var4);
    double var27[2];
    if (input[2] <= 0.9169205725193024) {
        if (input[0] <= -0.32487861812114716) {
            memcpy(var27, (double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            if (input[2] <= 0.33107319474220276) {
                if (input[2] <= -1.0171048641204834) {
                    if (input[1] <= -0.00047905376413837075) {
                        if (input[3] <= 0.34827136993408203) {
                            memcpy(var27, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var27, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[0] <= 0.015928193926811218) {
                            if (input[3] <= 0.16198312491178513) {
                                memcpy(var27, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[4] <= -0.32578693330287933) {
                                    memcpy(var27, (double[]){0.10204081632653061, 0.8979591836734694}, 2 * sizeof(double));
                                } else {
                                    memcpy(var27, (double[]){0.42105263157894735, 0.5789473684210527}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var27, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[1] <= 0.7384886145591736) {
                        if (input[0] <= 0.015928193926811218) {
                            if (input[5] <= 0.4235627055168152) {
                                memcpy(var27, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[5] <= 0.4422857165336609) {
                                    memcpy(var27, (double[]){0.8990825688073395, 0.10091743119266056}, 2 * sizeof(double));
                                } else {
                                    memcpy(var27, (double[]){0.2488425925925926, 0.7511574074074074}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var27, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[2] <= -0.04929342679679394) {
                            if (input[1] <= 1.4565847516059875) {
                                if (input[3] <= 1.835105061531067) {
                                    memcpy(var27, (double[]){0.047960308710033074, 0.9520396912899669}, 2 * sizeof(double));
                                } else {
                                    memcpy(var27, (double[]){0.23948220064724918, 0.7605177993527508}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= 0.42898373305797577) {
                                    memcpy(var27, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var27, (double[]){0.8240740740740741, 0.17592592592592593}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[5] <= 0.2366591915488243) {
                                if (input[1] <= 1.3922579884529114) {
                                    memcpy(var27, (double[]){0.1728395061728395, 0.8271604938271605}, 2 * sizeof(double));
                                } else {
                                    memcpy(var27, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[0] <= 0.015928193926811218) {
                                    memcpy(var27, (double[]){0.8666666666666667, 0.13333333333333333}, 2 * sizeof(double));
                                } else {
                                    memcpy(var27, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[3] <= -1.4431049823760986) {
                    if (input[2] <= 0.3659815639257431) {
                        if (input[1] <= 1.285201758146286) {
                            if (input[1] <= 0.914593517780304) {
                                memcpy(var27, (double[]){0.058823529411764705, 0.9411764705882353}, 2 * sizeof(double));
                            } else {
                                memcpy(var27, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var27, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[1] <= 1.0189818739891052) {
                            if (input[5] <= -0.12447888031601906) {
                                memcpy(var27, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[1] <= 0.8056424558162689) {
                                    memcpy(var27, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var27, (double[]){0.5555555555555556, 0.4444444444444444}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var27, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[1] <= 1.3519710302352905) {
                        if (input[2] <= 0.911555677652359) {
                            if (input[4] <= -0.3219556510448456) {
                                memcpy(var27, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[4] <= 0.32179902493953705) {
                                    memcpy(var27, (double[]){0.6226415094339622, 0.37735849056603776}, 2 * sizeof(double));
                                } else {
                                    memcpy(var27, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var27, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var27, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[0] <= -0.32487861812114716) {
            memcpy(var27, (double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            if (input[1] <= 1.3985716700553894) {
                if (input[1] <= 1.1250473260879517) {
                    if (input[4] <= -0.3217243105173111) {
                        if (input[5] <= -0.5863120257854462) {
                            if (input[1] <= 0.878067284822464) {
                                if (input[5] <= -0.6041133403778076) {
                                    memcpy(var27, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var27, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var27, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var27, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[1] <= 0.9702381491661072) {
                            if (input[4] <= 0.3105468302965164) {
                                if (input[2] <= 2.054353356361389) {
                                    memcpy(var27, (double[]){0.1524163568773234, 0.8475836431226765}, 2 * sizeof(double));
                                } else {
                                    memcpy(var27, (double[]){0.5106382978723404, 0.48936170212765956}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[3] <= -1.4026951789855957) {
                                    memcpy(var27, (double[]){0.030303030303030304, 0.9696969696969697}, 2 * sizeof(double));
                                } else {
                                    memcpy(var27, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[4] <= 0.3295753300189972) {
                                if (input[3] <= -1.4379721283912659) {
                                    memcpy(var27, (double[]){0.14893617021276595, 0.851063829787234}, 2 * sizeof(double));
                                } else {
                                    memcpy(var27, (double[]){0.96045197740113, 0.03954802259887006}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= -0.7515222430229187) {
                                    memcpy(var27, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var27, (double[]){0.028925619834710745, 0.9710743801652892}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 1.876797616481781) {
                        if (input[2] <= 1.048900544643402) {
                            if (input[3] <= 1.7955030798912048) {
                                if (input[4] <= -0.21275345981121063) {
                                    memcpy(var27, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var27, (double[]){0.04285714285714286, 0.9571428571428572}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= 0.9453336894512177) {
                                    memcpy(var27, (double[]){0.02702702702702703, 0.972972972972973}, 2 * sizeof(double));
                                } else {
                                    memcpy(var27, (double[]){0.4090909090909091, 0.5909090909090909}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[4] <= 0.32897844910621643) {
                                if (input[5] <= -1.715832769870758) {
                                    memcpy(var27, (double[]){0.8333333333333334, 0.16666666666666666}, 2 * sizeof(double));
                                } else {
                                    memcpy(var27, (double[]){0.32629107981220656, 0.6737089201877934}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= 1.2396871447563171) {
                                    memcpy(var27, (double[]){0.06315789473684211, 0.9368421052631579}, 2 * sizeof(double));
                                } else {
                                    memcpy(var27, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 0.5037420094013214) {
                            if (input[4] <= -0.29616713523864746) {
                                memcpy(var27, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[3] <= -0.12295042350888252) {
                                    memcpy(var27, (double[]){0.1111111111111111, 0.8888888888888888}, 2 * sizeof(double));
                                } else {
                                    memcpy(var27, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[4] <= 0.34002214670181274) {
                                if (input[2] <= 2.6678603887557983) {
                                    memcpy(var27, (double[]){0.3855421686746988, 0.6144578313253012}, 2 * sizeof(double));
                                } else {
                                    memcpy(var27, (double[]){0.07180851063829788, 0.9281914893617021}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var27, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[4] <= 0.33155709505081177) {
                    if (input[2] <= 3.10020112991333) {
                        if (input[5] <= -2.167145550251007) {
                            memcpy(var27, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[5] <= -1.9434762001037598) {
                                memcpy(var27, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[2] <= 1.1151567697525024) {
                                    memcpy(var27, (double[]){0.1111111111111111, 0.8888888888888888}, 2 * sizeof(double));
                                } else {
                                    memcpy(var27, (double[]){0.8723404255319149, 0.1276595744680851}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[1] <= 1.517332136631012) {
                            if (input[4] <= -0.3220731019973755) {
                                memcpy(var27, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var27, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[1] <= 1.5928350687026978) {
                                if (input[1] <= 1.5723254084587097) {
                                    memcpy(var27, (double[]){0.2777777777777778, 0.7222222222222222}, 2 * sizeof(double));
                                } else {
                                    memcpy(var27, (double[]){0.7333333333333333, 0.26666666666666666}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[4] <= -0.3113832622766495) {
                                    memcpy(var27, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var27, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 1.4606131315231323) {
                        if (input[2] <= 1.0967976450920105) {
                            memcpy(var27, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var27, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var27, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var4, var27, 2, var3);
    double var28[2];
    if (input[1] <= 0.5230766534805298) {
        if (input[0] <= -0.32487861812114716) {
            memcpy(var28, (double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            if (input[0] <= 0.015928193926811218) {
                if (input[2] <= -0.39215846359729767) {
                    if (input[1] <= 0.09278498217463493) {
                        if (input[5] <= 0.4260265678167343) {
                            memcpy(var28, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[4] <= 2.0556185245513916) {
                                if (input[1] <= -0.6889002323150635) {
                                    memcpy(var28, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var28, (double[]){0.17095115681233933, 0.8290488431876607}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= -0.012973876902833581) {
                                    memcpy(var28, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var28, (double[]){0.3, 0.7}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[3] <= -0.6380815505981445) {
                            if (input[2] <= -0.5811136960983276) {
                                memcpy(var28, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var28, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var28, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[4] <= 0.34544287621974945) {
                        if (input[1] <= 0.0630409475415945) {
                            if (input[1] <= 0.046427685767412186) {
                                if (input[1] <= -0.3383508175611496) {
                                    memcpy(var28, (double[]){0.03257328990228013, 0.9674267100977199}, 2 * sizeof(double));
                                } else {
                                    memcpy(var28, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var28, (double[]){0.3125, 0.6875}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var28, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var28, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var28, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[1] <= 1.5261199474334717) {
            if (input[4] <= -0.322119876742363) {
                if (input[5] <= 0.43020109832286835) {
                    if (input[2] <= 0.41256847977638245) {
                        if (input[1] <= 0.7602964341640472) {
                            memcpy(var28, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[5] <= 0.2721588462591171) {
                                if (input[4] <= -1.4747867584228516) {
                                    memcpy(var28, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var28, (double[]){0.07430997876857749, 0.9256900212314225}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[4] <= -1.1656546592712402) {
                                    memcpy(var28, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var28, (double[]){0.015414258188824663, 0.9845857418111753}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[1] <= 0.6205436885356903) {
                            if (input[3] <= 0.3979026898741722) {
                                memcpy(var28, (double[]){0.6153846153846154, 0.38461538461538464}, 2 * sizeof(double));
                            } else {
                                memcpy(var28, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[4] <= -1.5159232020378113) {
                                if (input[1] <= 0.985504686832428) {
                                    memcpy(var28, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var28, (double[]){0.06722689075630252, 0.9327731092436975}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= 0.8702538311481476) {
                                    memcpy(var28, (double[]){0.006345177664974619, 0.9936548223350253}, 2 * sizeof(double));
                                } else {
                                    memcpy(var28, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    memcpy(var28, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[1] <= 1.3967568278312683) {
                    if (input[2] <= -0.5265973806381226) {
                        if (input[2] <= -0.5326810777187347) {
                            memcpy(var28, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var28, (double[]){0.75, 0.25}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[5] <= 0.11305655166506767) {
                            if (input[4] <= 0.32266154885292053) {
                                if (input[1] <= 0.9976029098033905) {
                                    memcpy(var28, (double[]){0.2650771388499299, 0.7349228611500701}, 2 * sizeof(double));
                                } else {
                                    memcpy(var28, (double[]){0.9470672389127325, 0.05293276108726753}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[3] <= -1.4392443895339966) {
                                    memcpy(var28, (double[]){0.05719237435008666, 0.9428076256499134}, 2 * sizeof(double));
                                } else {
                                    memcpy(var28, (double[]){0.001135718341851221, 0.9988642816581488}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[4] <= 0.32671763002872467) {
                                if (input[3] <= -1.3930438160896301) {
                                    memcpy(var28, (double[]){0.0963855421686747, 0.9036144578313253}, 2 * sizeof(double));
                                } else {
                                    memcpy(var28, (double[]){0.9107142857142857, 0.08928571428571429}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= 0.18839199841022491) {
                                    memcpy(var28, (double[]){0.11717495987158909, 0.8828250401284109}, 2 * sizeof(double));
                                } else {
                                    memcpy(var28, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 3.0821943283081055) {
                        if (input[5] <= -2.1515201926231384) {
                            memcpy(var28, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[4] <= 0.303555428981781) {
                                if (input[5] <= -1.9434762001037598) {
                                    memcpy(var28, (double[]){0.2727272727272727, 0.7272727272727273}, 2 * sizeof(double));
                                } else {
                                    memcpy(var28, (double[]){0.898989898989899, 0.10101010101010101}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[3] <= -1.413039207458496) {
                                    memcpy(var28, (double[]){0.574468085106383, 0.425531914893617}, 2 * sizeof(double));
                                } else {
                                    memcpy(var28, (double[]){0.08536585365853659, 0.9146341463414634}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[1] <= 1.4600001573562622) {
                            if (input[5] <= -4.0584893226623535) {
                                if (input[4] <= 0.1756114959716797) {
                                    memcpy(var28, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var28, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var28, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[1] <= 1.499700903892517) {
                                if (input[5] <= -4.045893669128418) {
                                    memcpy(var28, (double[]){0.22448979591836735, 0.7755102040816326}, 2 * sizeof(double));
                                } else {
                                    memcpy(var28, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= 1.5111150741577148) {
                                    memcpy(var28, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var28, (double[]){0.12903225806451613, 0.8709677419354839}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[2] <= 3.087686538696289) {
                memcpy(var28, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[2] <= 3.088022470474243) {
                    if (input[2] <= 3.087728977203369) {
                        if (input[5] <= -4.024627685546875) {
                            memcpy(var28, (double[]){0.15789473684210525, 0.8421052631578947}, 2 * sizeof(double));
                        } else {
                            if (input[4] <= 0.3802890181541443) {
                                memcpy(var28, (double[]){0.15384615384615385, 0.8461538461538461}, 2 * sizeof(double));
                            } else {
                                memcpy(var28, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[2] <= 3.0877844095230103) {
                            memcpy(var28, (double[]){0.037037037037037035, 0.9629629629629629}, 2 * sizeof(double));
                        } else {
                            memcpy(var28, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[4] <= -0.31956352293491364) {
                        memcpy(var28, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[4] <= 0.3270758390426636) {
                            memcpy(var28, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var28, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                }
            }
        }
    }
    add_vectors(var3, var28, 2, var2);
    double var29[2];
    if (input[1] <= 0.5519349277019501) {
        if (input[3] <= 1.5601895451545715) {
            if (input[2] <= -0.5314673483371735) {
                if (input[4] <= -0.5490882992744446) {
                    if (input[0] <= -0.32487861812114716) {
                        memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[3] <= 0.25016437470912933) {
                            if (input[0] <= 0.015928193926811218) {
                                if (input[4] <= -1.4811971187591553) {
                                    memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var29, (double[]){0.09900990099009901, 0.900990099009901}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[2] <= -0.8185052871704102) {
                                if (input[3] <= 1.0657423734664917) {
                                    memcpy(var29, (double[]){0.12834224598930483, 0.8716577540106952}, 2 * sizeof(double));
                                } else {
                                    memcpy(var29, (double[]){0.30357142857142855, 0.6964285714285714}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[2] <= -0.7698045670986176) {
                        if (input[1] <= 0.07793063297867775) {
                            if (input[1] <= 0.02122960239648819) {
                                memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[5] <= 0.5677327513694763) {
                                    memcpy(var29, (double[]){0.9444444444444444, 0.05555555555555555}, 2 * sizeof(double));
                                } else {
                                    memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[0] <= 0.015928193926811218) {
                                if (input[3] <= 0.16198312491178513) {
                                    memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var29, (double[]){0.13333333333333333, 0.8666666666666667}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[4] <= 0.6780355870723724) {
                            if (input[1] <= -0.33112166821956635) {
                                if (input[5] <= 0.521475225687027) {
                                    memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var29, (double[]){0.3972602739726027, 0.6027397260273972}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[0] <= -0.34922195971012115) {
                                memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[1] <= -0.340912401676178) {
                                    memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var29, (double[]){0.15789473684210525, 0.8421052631578947}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[5] <= 0.48361189663410187) {
                if (input[2] <= 1.6444399803876877) {
                    if (input[0] <= 0.015928193926811218) {
                        memcpy(var29, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 0.3210650384426117) {
                        if (input[4] <= -0.3169451504945755) {
                            memcpy(var29, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[1] <= -1.1498359739780426) {
                                memcpy(var29, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var29, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[5] <= 0.5549517571926117) {
                    if (input[1] <= -0.05764402262866497) {
                        if (input[2] <= -0.7004105150699615) {
                            if (input[2] <= -0.7759447991847992) {
                                if (input[4] <= -1.2994617819786072) {
                                    memcpy(var29, (double[]){0.03571428571428571, 0.9642857142857143}, 2 * sizeof(double));
                                } else {
                                    memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= -0.7297231256961823) {
                                    memcpy(var29, (double[]){0.6923076923076923, 0.3076923076923077}, 2 * sizeof(double));
                                } else {
                                    memcpy(var29, (double[]){0.5555555555555556, 0.4444444444444444}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[1] <= -0.48356685042381287) {
                                memcpy(var29, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var29, (double[]){0.05263157894736842, 0.9473684210526315}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var29, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[0] <= 0.015928193926811218) {
            if (input[4] <= -0.3226272463798523) {
                if (input[1] <= 1.6390679478645325) {
                    if (input[2] <= -0.41811102628707886) {
                        memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[3] <= -1.4427839517593384) {
                            if (input[1] <= 1.3803685903549194) {
                                if (input[4] <= -1.2223768830299377) {
                                    memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var29, (double[]){0.037422037422037424, 0.9625779625779626}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= -0.3587701767683029) {
                                    memcpy(var29, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                } else {
                                    memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[2] <= 0.005772360600531101) {
                                if (input[2] <= -0.0532693387940526) {
                                    memcpy(var29, (double[]){0.03240223463687151, 0.9675977653631285}, 2 * sizeof(double));
                                } else {
                                    memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= 0.9335874021053314) {
                                    memcpy(var29, (double[]){0.001451378809869376, 0.9985486211901307}, 2 * sizeof(double));
                                } else {
                                    memcpy(var29, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[4] <= 0.32129184901714325) {
                    if (input[1] <= 0.9635209143161774) {
                        if (input[3] <= -1.2904734015464783) {
                            if (input[5] <= -0.5671970248222351) {
                                if (input[2] <= 1.079677939414978) {
                                    memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var29, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= 0.05512258899398148) {
                                    memcpy(var29, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var29, (double[]){0.020689655172413793, 0.9793103448275862}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[1] <= 0.5922420024871826) {
                                memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[3] <= 1.685393214225769) {
                                    memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var29, (double[]){0.025974025974025976, 0.974025974025974}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 0.5830250978469849) {
                            if (input[3] <= -0.12229179963469505) {
                                if (input[1] <= 0.9884183704853058) {
                                    memcpy(var29, (double[]){0.48936170212765956, 0.5106382978723404}, 2 * sizeof(double));
                                } else {
                                    memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= 0.24880659580230713) {
                                    memcpy(var29, (double[]){0.6917808219178082, 0.3082191780821918}, 2 * sizeof(double));
                                } else {
                                    memcpy(var29, (double[]){0.08695652173913043, 0.9130434782608695}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[4] <= -0.08249984309077263) {
                                if (input[5] <= -4.058438062667847) {
                                    memcpy(var29, (double[]){0.819672131147541, 0.18032786885245902}, 2 * sizeof(double));
                                } else {
                                    memcpy(var29, (double[]){0.9623287671232876, 0.03767123287671233}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= -4.060530662536621) {
                                    memcpy(var29, (double[]){0.9512195121951219, 0.04878048780487805}, 2 * sizeof(double));
                                } else {
                                    memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= -0.5291106402873993) {
                        memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[1] <= 1.6917640566825867) {
                            if (input[1] <= 1.494587481021881) {
                                if (input[4] <= 3.5215736627578735) {
                                    memcpy(var29, (double[]){0.02056380226065641, 0.9794361977393435}, 2 * sizeof(double));
                                } else {
                                    memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= 2.174689829349518) {
                                    memcpy(var29, (double[]){0.9264705882352942, 0.07352941176470588}, 2 * sizeof(double));
                                } else {
                                    memcpy(var29, (double[]){0.008583690987124463, 0.9914163090128756}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            memcpy(var29, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var2, var29, 2, var1);
    mul_vector_number(var1, 0.06666666666666667, 2, var0);
    memcpy(output, var0, 2 * sizeof(double));
}
