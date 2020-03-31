# CPP-DESIGN-PATTERN

**Design pattern**  in informatica e specialmente nell'ambito dell'ingegneria del software, è un concetto che
 può essere definito "una soluzione progettuale generale ad un problema ricorrente". Si tratta di una descrizione 
 o modello logico da applicare per la risoluzione di un problema che può presentarsi in diverse situazioni durante 
 le fasi di progettazione e sviluppo del software, ancor prima della definizione dell'algoritmo risolutivo della parte
  computazionale. È un approccio spesso efficace nel contenere o ridurre il debito tecnico.

I design pattern orientati agli oggetti tipicamente mostrano relazioni ed interazioni tra classi o oggetti,
senza specificare le classi applicative finali coinvolte, risiedendo quindi nel dominio dei moduli 
e delle interconnessioni. Ad un livello più alto sono invece i pattern architetturali che hanno un ambito
ben più ampio, descrivendo un pattern complessivo adottato dall'intero sistema, la cui implementazione logica 
dà vita a un framework.


### Classificazione
**Pattern creazionali**,
I pattern creazionali risolvono problematiche inerenti l'istanziazione degli oggetti.

- **Builder** separa la costruzione di un oggetto complesso dalla sua rappresentazione.
- **Factory** fornisce un'interfaccia per creare un oggetto, ma lascia che le sottoclassi decidano quale oggetto istanziare.
- **Prototype** permette di creare nuovi oggetti clonando un oggetto iniziale, o prototipo.
- **Singleton** ha lo scopo di assicurare che di una classe possa essere creata una sola istanza in sistemi con un unico thread.

**Pattern strutturali**, I pattern strutturali risolvono problematiche inerenti la struttura delle classi e degli oggetti

- **Adapter** converte l'interfaccia di una classe in una interfaccia diversa.
- **Bridge** permette di separare l'astrazione di una classe dalla sua implementazione, per permettere loro di variare indipendentemente.
- **Composite** utilizzato per dare la possibilità all'utilizzatore di manipolare gli oggetti in modo uniforme, organizza gli oggetti in una struttura ad albero.
- **Decorator** consente di aggiungere metodi a classi esistenti durante il run-time (cioè durante lo svolgimento del programma), permettendo una maggior flessibilità nell'aggiungere delle funzionalità agli oggetti.
- **Façade** permette, attraverso un'interfaccia più semplice, l'accesso a sottosistemi che espongono interfacce complesse e diverse tra loro.
- **Flyweight** permette di separare la parte variabile di una classe dalla parte che può essere riutilizzata.
- **Proxy** fornisce una rappresentazione di un oggetto di accesso difficile o che richiede un tempo importante per l'accesso o creazione. Il Proxy consente di posticipare l'accesso o creazione al momento in cui sia davvero richiesto.

**Pattern comportamentali**, I pattern comportamentali forniscono soluzione alle più comuni tipologie di interazione tra gli oggetti.

- **Chain of Responsibility** diminuisce l'accoppiamento fra l'oggetto che effettua una richiesta e quello che la soddisfa, dando a più oggetti la possibilità di soddisfarla
- **Command** permette di isolare la porzione di codice che effettua un'azione dal codice che ne richiede l'esecuzione.
- **Interpreter** dato un linguaggio, definisce una rappresentazione della sua grammatica insieme ad un interprete che utilizza questa rappresentazione per l'interpretazione delle espressioni in quel determinato linguaggio.
- **Iterator** risolve diversi problemi connessi all'accesso e alla navigazione attraverso gli elementi di una struttura dati, senza esporre i dettagli dell'implementazione e della struttura interna del contenitore.
- **Mediator** si interpone nelle comunicazioni tra oggetti, allo scopo di aggiornare lo stato del sistema quando uno qualunque di essi comunica un cambiamento del proprio stato.
- **Memento** è l'operazione di estrarre lo stato interno di un oggetto, senza violarne l'incapsulazione, e memorizzarlo per poterlo ripristinare in un momento successivo.
- **Observer** definisce una dipendenza uno a molti fra oggetti diversi, in maniera tale che se un oggetto cambia il suo stato, tutti gli oggetti dipendenti vengono notificati del cambiamento avvenuto e possono aggiornarsi.
- **State** permette ad un oggetto di cambiare il suo comportamento al cambiare di un suo stato interno.
- **Strategy** è utile in quelle situazioni dove è necessario modificare dinamicamente gli algoritmi utilizzati da un'applicazione.
- **Visitor** permette di separare un algoritmo dalla struttura di oggetti composti a cui è applicato, in modo da poter aggiungere nuovi comportamenti senza dover modificare la struttura stessa.

