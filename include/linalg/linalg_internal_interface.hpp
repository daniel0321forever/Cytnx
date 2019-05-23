#ifndef _H_linalg_internal_interface_
#define _H_linalg_internal_interface_
#include <iostream>
#include <vector>

#include "Type.hpp"
#include "Storage.hpp"
#include "linalg/linalg_internal_cpu/Arithmic_internal_cpu.hpp"


namespace tor10{
    namespace linalg_internal{
        typedef void (*Arithmicfunc_oii)(boost::intrusive_ptr<Storage_base> &,boost::intrusive_ptr<Storage_base> &,boost::intrusive_ptr<Storage_base> &,const unsigned long long & len, const char &type);
        class linalg_internal_interface{

            public:
                std::vector<std::vector<Arithmicfunc_oii> > Ari_iicpu;

                #ifdef UNI_GPU
                std::vector<std::vector<Arithmicfunc_oii> > Ari_iigpu;
                #endif

            linalg_internal_interface();
                

        };
        extern linalg_internal_interface lii;
    }
}
#endif

