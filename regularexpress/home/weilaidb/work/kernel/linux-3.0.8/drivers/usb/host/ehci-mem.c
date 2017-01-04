static inline void ehci_qtd_init(struct ehci_hcd *ehci, struct ehci_qtd *qtd,
dma_addr_t dma)
static struct ehci_qtd *ehci_qtd_alloc (struct ehci_hcd *ehci, gfp_t flags)
static inline void ehci_qtd_free (struct ehci_hcd *ehci, struct ehci_qtd *qtd)
static void qh_destroy(struct ehci_qh *qh)
static struct ehci_qh *ehci_qh_alloc (struct ehci_hcd *ehci, gfp_t flags)
static inline struct ehci_qh *qh_get (struct ehci_qh *qh)
static inline void qh_put (struct ehci_qh *qh)
static void ehci_mem_cleanup (struct ehci_hcd *ehci)
static int ehci_mem_init (struct ehci_hcd *ehci, gfp_t flags)