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

- **Builder:** quando la costruzione di un oggetto è particolarmente complicata.
- **Factory:** fornisce un'interfaccia per creare un oggetto, ma lascia che le sottoclassi decidano quale oggetto istanziare.
- **Prototype:** quando è più semplice copiare un oggetto esistente che inizializzarne uno completamente nuovo.
- **Singleton:** ha lo scopo di assicurare che di una classe possa essere creata una sola istanza in sistemi con un unico thread.

**Pattern strutturali**, I pattern strutturali risolvono problematiche inerenti la struttura delle classi e degli oggetti

- **Adapter:** ottenere l'interfaccia desiderata da interfaccia esistente.
- **Bridge:** collega i componenti tra loro attraverso classi asttratte.
- **Composite:** tratta oggetti e aggragati, dell'oggetto stesso, in modo uniforme.
- **Decorator** aggiunge funzionalità senza alterare la classe.
- **Façade:** Esporre più componenti attraverso un'unica interfaccia
- **Flyweight:** Ottimiza lo spazio occupato.
- **Proxy:** Un interfaccia per accedere ad una particolare risorsa.

**Pattern comportamentali**, I pattern comportamentali forniscono soluzione alle più comuni tipologie di interazione tra gli oggetti.

- **Chain of Responsibility:** sequenza di gestori che elaborano un evento uno dopo l'altro.
- **Command:** permette di isolare la porzione di codice che effettua un'azione (eventualmente molto complessa) dal codice che ne richiede l'esecuzione; l'azione è incapsulata nell'oggetto Command.
- **Interpreter:** (parser) definisce una rappresentazione della sua grammatica insieme ad un interprete che utilizza questa rappresentazione per l'interpretazione delle espressioni in quel determinato linguaggio.
- **Iterator:** risolve diversi problemi connessi all'accesso e alla navigazione attraverso gli elementi di una struttura dati, senza esporre i dettagli dell'implementazione e della struttura interna del contenitore.
- **Mediator:** facilita la comunicazione tra i componenti (media la comunizione vedi moderatore di chat).
- **Memento:** è l'operazione di estrarre lo stato interno di un oggetto, senza violarne l'incapsulazione, e memorizzarlo per poterlo ripristinare in un momento successivo.
- **Observer** ricevere una notifica quando succede qualcosa.
- **State:** permette ad un oggetto di cambiare il suo comportamento al cambiare di un suo stato interno.
- **Strategy:** è utile in quelle situazioni dove è necessario modificare dinamicamente gli algoritmi utilizzati da un'applicazione.
- **Visitor:** permette di separare un algoritmo dalla struttura di oggetti composti a cui è applicato, in modo da poter aggiungere nuovi comportamenti senza dover modificare la struttura stessa.

