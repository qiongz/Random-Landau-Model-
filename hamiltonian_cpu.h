#include"mkl_diag.h"
#include<complex>
#include<pthread.h>
using namespace std;

/* Structure to store address of each variable in peer_solve_projected() */
typedef struct {
    int theta_1;
    int n_phi;
    int n_mesh;
    int dim_m;
    int dim_n;
    int off_head;
    int *theta_2;
    int theta_len;
    float *energy;
    complex<float>*wave_function;
    complex<float> *v_mn;
    complex<float> *coeff_jm;
    complex<float> *coeff_m_theta;
} peer_solve_paramsT;

void *peer_solve_projected( void* peer_solve_params);