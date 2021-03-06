void kvmppc_core_load_host_debugstate(struct kvm_vcpu *vcpu)
void kvmppc_core_load_guest_debugstate(struct kvm_vcpu *vcpu)
void kvmppc_core_vcpu_load(struct kvm_vcpu *vcpu, int cpu)
void kvmppc_core_vcpu_put(struct kvm_vcpu *vcpu)
int kvmppc_core_check_processor_compat(void)
int kvmppc_core_vcpu_setup(struct kvm_vcpu *vcpu)
int kvmppc_core_vcpu_translate(struct kvm_vcpu *vcpu,
struct kvm_translation *tr)
void kvmppc_core_get_sregs(struct kvm_vcpu *vcpu, struct kvm_sregs *sregs)
int kvmppc_core_set_sregs(struct kvm_vcpu *vcpu, struct kvm_sregs *sregs)
struct kvm_vcpu *kvmppc_core_vcpu_create(struct kvm *kvm, unsigned int id)
void kvmppc_core_vcpu_free(struct kvm_vcpu *vcpu)
static int __init kvmppc_e500_init(void)
static void __exit kvmppc_e500_exit(void)
module_init(kvmppc_e500_init);
module_exit(kvmppc_e500_exit);
