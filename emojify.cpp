#include <iostream>
#include <ctime>
#include <cstdlib>
#include <chrono>
#include <string>
#include <thread>
using namespace std;

void start();
string storage[697] = {
        "🚫", "😃", "😄", "😁", "😆", "😅", "🤣", "😂", "🙂", "🙃", "🫠", "😉", "😊", "😇", "🥰", "😍", "🤩", "😘", "😗", "😚", "😙", 
        "🥲", "😋", "😛", "😜", "🤪", "😝", "🤑", "🤗", "🤭", "🫢", "🫣", "🤫", "🤔", "🫡", "🤐", "🤨", "😐", "😑", "😶", "🫥",  
        "😏", "😒", "🙄", "😬",  "🤥", "🫨", "😌", "😔", "😪", "🤤", "😴", "😷", "🤒", "🤕", "🤢", "🤮", "🤧", "🥵", "🥶", "🥴", 
        "😵", "🤯", "🤠", "🥳", "🥸", "😎", "🤓", "🧐", "😕", "🫤", "😟", "🙁","😮", "😯", "😲", "😳", "🥺", "🥹", "😦", 
        "😧", "😨", "😰", "😥", "😢", "😭", "😱", "😖", "😣", "😞", "😓", "😩", "😫", "🥱", "😤", "😡", "😠", "🤬", "😈", "👿", "🤡", "😺", "😸", "😹", "😻", "😼", "😽", "🙀", "😿", "😾",
        "💩", "💀", "👹", "👺", "👻", "👽", "👾", "🤖",  "🙈", "🙉", "🙊", 
        "💌", "💘", "💝", "💖", "💗", "💓", "💞", "💕", "💟",  "💔", "🩷", "🧡", "💛", "💚", "💙", "🩵", 
        "💜", "🤎", "🖤", "🩶", "🤍", "💋", "💯", "💢", "💥", "💫", "💨", "💬",  "💭", "💤", "👋", 
        "🤚", "🖐", "✋", "🖖", "🫱", "🫲", "🫳", "🫴", "🫷", "🫸", "👌", "🤌", "🤏", "✌", "🤞", "🫰", "🤟", "🤘", "🤙", "👈", "👉", 
        "👆", "👇", "☝", "🫵", "👍", "👎", "✊", "👊", "🤛", "🤜", "👏", "🙌", "🫶", "👐", "🤲", "🤝", "🙏", "✍", "💅", "🤳", 
        "💪", "🦾", "🦿", "🦵", "🦶", "👂",  "👃", "🧠", "🫀", "🫁", "🦷", "🦴", "👀",  "👅", "👄", "🫦", "👶", "🧒", 
        "👦", "👧", "🧑", "👱", "👨", "🧔","💃", "🕺", "🕴", "👯", "🐵", "🐒", "🦍", "🦧", "🐶", "🐕", "🦮",  "🐩", "🐺", "🦊", "🦝", "🐱", "🐈", 
        "🦁", "🐯", "🐅", "🐆", "🐴", "🫎", "🫏", "🐎", "🦄", "🦓", "🦌", "🦬", "🐮", "🐂", "🐃", 
        "🐄", "🐷", "🐖", "🐗", "🐽", "🐏", "🐑", "🐐", "🐪", "🐫", "🦙", "🦒", "🐘", "🦣", "🦏", "🦛", 
        "🐭", "🐁", "🐀", "🐹", "🐰", "🐇",  "🦫", "🦔", "🦇", "🐻",  "🐨", "🐼", "🦥", "🦦", 
        "🦨", "🦘", "🦡", "🐾", "🦃", "🐔", "🐓", "🐣", "🐤", "🐥", "🐦", "🐧", "🦅", "🦆", "🦢", "🦉", 
        "🦤", "🪶", "🦩", "🦚", "🦜", "🪽", "🪿", "🐸", "🐊", "🐢", "🦎", "🐍", "🐲", "🐉", "🦕", "🦖", 
        "🐳", "🐋", "🐬", "🦭", "🐟", "🐠", "🐡", "🦈", "🐙", "🐚", "🪸", "🪼", "🐌", "🦋", "🐛", "🐜", "🐝", 
        "🪲", "🐞", "🦗", "🪳",  "🦂", "🦟", "🪰", "🪱", "🦠", "💐", "🌸", "💮", "🪷", "🌹", 
        "🥀", "🌺", "🌻", "🌼", "🌷", "🪻", "🌱", "🪴", "🌲", "🌳", "🌴", "🌵", "🌾", "🌿", "🍀", "🍁", 
        "🍂", "🍃", "🪹", "🪺", "🍄", "🍇", "🍈", "🍉", "🍊", "🍋",  "🍍", "🥭", "🍎", "🍏", "🍐",  
        "🍒", "🍓", "🫐", "🥝", "🍅", "🫒", "🥥", "🥑", "🥔", "🥕", "🌽", "🌶", "🫑", "🥒", "🥬", "🥦", 
        "🧄", "🧅", "🥜", "🫘", "🌰", "🫚", "🫛", "🍞", "🥐", "🥖", "🫓", "🥨", "🥯", "🥞", "🧇", "🧀", "🍖", 
        "🍗", "🥩", "🥓", "🍔", "🍟", "🍕", "🌭", "🥪", "🌮", "🌯", "🫔", "🥙", "🧆", "🥚", "🍳", "🥘", "🍲", 
        "🫕", "🥣", "🥗", "🍿", "🧈", "🧂", "🥫", "🍱", "🍘", "🍙", "🍚", "🍛", "🍜", "🍝", "🍠", "🍢", "🍣", 
        "🍤", "🍥", "🥮", "🍡", "🥟", "🥠", "🥡", "🦀", "🦞", "🦐", "🦑", "🦪", "🍦", "🍧", "🍨", "🍩", "🍪", 
        "🎂", "🍰", "🧁", "🥧", "🍫", "🍬", "🍭", "🍮", "🍯", "🍼", "🥛", "☕", "🫖", "🍵", "🍶", "🍾", "🍷", 
        "🍸", "🍹", "🍺", "🍻", "🥂", "🥃", "🫗", "🥤", "🧋", "🧃", "🧉", "🧊", "🥢", "🍽", "🍴", "🥄", "🔪", 
        "🫙", "🏺","👓",  "🥽", "🥼", "🦺", "👔", "👕", "👖", "🧣", "🧤", "🧥", "🧦", "👗", "👘", "🥻",  
        "🩳",  "👚", "🪭", "👛", "👜", "👝",  "🎒", "🩴", "👞", "👟", "🥾", "🥿", "👠", "👡", "🩰", "👢", 
        "🪮", "👑", "👒", "🎩", "🎓", "🧢", "🪖",  "📿", "💄", "💍", "💎", "🔇", "🔈", "🔉", "🔊", "📢", "📣", 
        "📯", "🔔", "🔕", "🎼",  "🎤", "🎧", "📻", "🎷", "🪗", "🎸", "🎹", "🎺", "🎻", 
        "🪕", "🥁", "🪘", "🪇", "🪈", "📱",  "📞", "📟", "📠", "🔋", "🪫", "🔌", "💻", 
         "💽", "💾", "💿", "📀", "🧮", "🎥",  "🎬", "📺", "📷",  "📹", "📼", "🔍", "🔎", 
         "💡", "🔦", "🏮", "🪔", "📔", "📕", "📖", "📗", "📘", "📙", "📚", "📓", "📒", "📃", "📜", "📄", "📰", 
         "📑", "🔖",  "💰", "🪙", "💴", "💵", "💶", "💷", "💸", "💳", "🧾", "💹", "📧", "📨", "📩", 
        "📤", "📥", "📦", "📫", "📪", "📬", "📭", "📮", "📝", "💼", "📁", 
        "📂", "🗂", "📅", "📆",  "📇", "📈", "📉", "📊", "📋", "📌", "📍", "📎",  "📏", "📐", 
         "🔒", "🔓", "🔑", "🔨", "🪓", "💣", "🪃", 
        "🏹",  "🪚", "🔧", "🪛", "🔩",  "🦯", "🔗", "🪝", "🧰", "🧲", "🪜",  "🧪", 
        "🧫", "🧬", "🔬", "🔭", "📡", "💉", "🩸", "💊", "🩹", "🩼", "🩺", "🩻", "🚪", "🛗", "🪞", "🪟", 
        "🪑", "🚽", "🪠", "🚿", "🛁", "🪤", "🪒", "🧴", "🧷", "🧹", "🧺", "🧻", "🪣", "🧼", "🫧", "🪥", "🧽", 
        "🧯", "🛒", "🚬",  "🪦",  "🧿", "🪬", "🗿", "🪧", "🪪"
    }; 

int card1[100]={0},card2[100]={0},card3[100]={0},card4[100]={0},card5[100]={0},record[100]={0};
int ran();
bool check();
int count=0, vital=0, ans, level=1, diff=3,counter=0,cards=2,timer,smiley=697,sub,maxi,mini;
void take(), display();
long long duration;
bool safe=true,change=true;
void play();
void see();
void playagain();
void erase();
void pick();
void menu();
int discover[1000]={0},dc=0;
bool discover_check();
void win();
void help();
void error();

void error(){
    cout<<"error"<<endl;
    cout << "--------------------------------" << endl;
    menu();
}

void help(){
    cout<<"welcome to emojify"<<endl;
    cout << "--------------------------------" << endl;
    cout<<"Objective: pick the matching emoji in the given set of cards"<<endl;
    cout << "--------------------------------" << endl;
    cout<<"In each level, you will be presented with a series of emojis and your goal to pass through all the levels"<<endl;
    cout<<"select the corresponding number to the mathcing emoji in the last card to give the answer."<<endl;
    cout<<"each question as its own set of time and difficulty."<<endl;
    cout << "--------------------------------" << endl;
    cout << "Level Guide:" << endl;
    cout << " - Lower levels have fewer emojis and more time to answer." << endl;
    cout << " - Higher levels introduce more emojis and less time to answer." << endl;
    cout << "--------------------------------" << endl;
    cout << "Special Features:" << endl;
    cout << "1. 'Discovery' allows you to see all the emojis you've unlocked so far." << endl;
    cout << "2. 'Cheat Jump' lets you skip to any level between 1 and 20." << endl;
    cout << "3. You can toggle between showing all emojis or only smileys." << endl;
    cout << "--------------------------------" << endl;
    cout << "Good luck, and enjoy playing Emojify!" << endl;
    cout << "--------------------------------" << endl;
    cout << "Press 1 to return to the main menu: ";
    int x;
    cin >> x;
    cout << "--------------------------------" << endl;
    cout<<endl;
    if(x == 1)
        menu();
    else
        error();
}

void win(){
    cout<<"congratulations!"<<endl;
    cout<<"Victory unlocked! You just broke the game's winning meter."<<endl;
    cout<<"Now you can brag like a legend!"<<endl;
    cout<<"--------------------------------"<<endl;
    menu();
}

void menu() {
    int choice;
    static int emoji = 1; 

    cout << "1. Play" << endl;

    if (emoji == 1)
        cout << "2. Emoji: All" << endl;
    else
        cout << "2. Emoji: Only Smileys" << endl;

    cout<<"3. Discovery" << endl;
    cout<<"4. Help" << endl;
    cout<<"5. cheat jump"<<endl;
    cout<<"6. Exit" << endl;
    cout<<"enter : ";
    cin >> choice;
    if(choice!=1)
        cout<<"--------------------------------"<<endl;
    if(choice==1)
    {
        level=1;
        erase();
        play();
    }
    else if (choice == 2) {
        if (emoji == 1) {
            emoji = 2;
            smiley=110;
            menu(); 
        } else {
            emoji = 1;
            smiley=696;
            menu(); 
        }
    }
    else if (choice == 5){
        int x;
        cout<<"enter the level to jump (1-20) : ";
        cin>>x;
        cout<<"--------------------------------"<<endl;
        if(x>0&&x<21){
            level=x;
            erase();
            play();
        }
        else{
            cout<<"error! level not found."<<endl;
            cout<<"--------------------------------"<<endl;
            menu();
        }
    }
    else if (choice==3){
        cout<<"total emojies discovered : "<<dc<<endl;
        cout<<""<<endl;
        
        for(int i=1; i<dc; i++){
            cout<<storage[discover[i]]<<" ";
            if(i%10==0 && i!=0)
                cout<<endl;}
        if(dc==0)
            cout<<"❔"<<endl;
        else{
        cout<<storage[discover[0]]<<" "<<endl;}
        cout<<""<<endl;
        cout<<"total "<<700-dc<<" emojies yet to discover !"<<endl;
        cout<<"play more to discover more!"<<endl;
        cout<<"--------------------------------"<<endl;
        int x;
        cout<<"press 1 to go back : ";
        cin>>x;
        cout<<"--------------------------------"<<endl;
        if(x==1)
            menu();
        else
            error();
    }
    else if(choice==4)
        help();
    else if(choice==6)
    {
        cout<<"thank you for playing emojify!"<<endl;
    }
    else
        error();
    
}
void pick()
{
    if(counter==5)
    {
        level++;
        counter=0;
    }
    if(level==21)
        win();
    if(counter==0)
    {
        
        
        cout<<" "<<endl;
        cout<<"--------------------------------"<<endl;
        cout<<"        --- level "<<level<<" ---"<<endl;
        if(level==7 || level==10 || level==13 || level==15 || level==16 || level==18 || level==20 )
            cout<<"     * extremly difficult *"<<endl;
    }
    if(level==1)
        cards=2,diff=3,timer=5;
    else if(level==2)
        cards=2,diff=5,timer=10;
    else if(level==3)
        cards=3,diff=3,timer=10;
    else if(level==4)
        cards=2,diff=7,timer=15;
    else if(level==5)
        cards=3,diff=5,timer=15;
    else if(level==6)
        cards=3,diff=7,timer=15;
    else if(level==7)
        cards=3,diff=7,timer=20;
    else if(level==8)
        cards=4,diff=3,timer=5;
    else if(level==9)
        cards=4,diff=5,timer=10;
    else if(level==10)
        cards=4,diff=5,timer=10;
    else if(level==11)
        cards=3,diff=10,timer=15;
    else if(level==12)
        cards=4,diff=7,timer=20;
    else if(level==13)
        cards=4,diff=7,timer=20;
    else if(level==14)
        cards=5,diff=5,timer=20;
    else if(level==15)
        cards=5,diff=5,timer=25;
    else if(level==16)
        cards=4,diff=10,timer=20;
    else if(level==17)
        cards=5,diff=7,timer=20;
    else if(level==18)
        cards=5,diff=7,timer=15;
    else if(level==19)
        cards=5,diff=10,timer=25;
    else if(level==20)
        cards=5,diff=10,timer=15;
    if(counter==0)
    {
        cout<<"    time is set to "<<timer<<" seconds"<<endl;
        cout<<"--------------------------------"<<endl;
        this_thread::sleep_for(chrono::seconds(3));
    }
    
    

}

void erase()
{
    count=0, vital=0;
    safe=true;
    for(int i=0; i<11; i++)
    {
        record[i]=0;
        card1[i]=0;
        card2[i]=0;
    }
}

void playagain()
{
    counter=0;
    int choice;
    cout<<"1. play again"<<endl;
    cout<<"2. menu"<<endl;
    cout<<"enter : ";
    cin>>choice;
    
    if(choice==1)
    {
        erase();
        play();
    }
    else if(choice==2)
    {
        cout<<"--------------------------------"<<endl;
        menu();
    }
    else{
        cout<<"--------------------------------"<<endl;
        error();
    }
}

void see()
{

        if(duration<=timer && card2[ans-1]==vital)
        {
            safe=true;
        }
        else
        {
            safe=false;
        }
}

void play()
{
    while(safe==true)
    {
        change=true;
        pick();
        start();
        display();
        take();
        cout<<"--------------------------------"<<endl;
        if(duration<=timer && card2[ans-1]==vital)
            cout<<"correct answer!"<<endl;

        cout<<"time taken : "<<duration<<" / "<<timer<<" seconds"<<endl;
        
        if(duration<=timer && card2[ans-1]==vital){
            cout<<"--------------------------------"<<endl;
            this_thread::sleep_for(chrono::milliseconds(1500));}
        
    }
    if(!(duration<=timer) && card2[ans-1]==vital)
        cout<<"correct answer but time is out !"<<endl;
    else
        cout<<"wrong answer !"<<endl;
    cout<<"--------------------------------"<<endl;
    this_thread::sleep_for(chrono::milliseconds(1500));
    playagain();
}

int ran()
{
    if(change==true){
        change=false;
        if(level==7 || level==10 || level==13 || level==15 || level==16 || level==18 || level==20 )
            sub=((2*diff)+1);
        else
            sub=((cards*diff)+1);
        //cout<<sub<<endl;
        do {
            mini = rand() % smiley;
        } while (mini >= (smiley - sub));
        maxi=mini+sub;}
    return(rand()% (maxi - mini + 1)) + mini;
}

bool check(int value)
{
    for (int j = 0; j < count; j++) {
        if (record[j] == value) {
            return false; 
        }
    }
    return true;
}

bool discover_check(int value)
{
    for (int j = 0; j < dc; j++) {
        if (discover[j] == value) {
            return false; 
        }
    }
    return true;
}

void start()
{
    erase();
    vital=ran();
    record[count++] = vital;
    if(discover_check(vital)==true)
        discover[dc++]=vital;
    for (int i = 0; i < diff; i++) {
        int num;
        do {
            num = ran();
        } while (!check(num)); 
        
        card1[i] = num;
        record[count++] = num; 
        
        do {
            num = ran();
        } while (!check(num)); 
        
        card2[i] = num;
        record[count++] = num;
        
        do {
            num = ran();
        } while (num==vital);
        card3[i]=num;
        
        do {
            num = ran();
        } while (num==vital);
        card4[i]=num;
        
        do {
            num = ran();
        } while (num==vital);
        card5[i]=num;
        
    }
    card1[rand()%diff]=vital;
    card2[rand()%diff]=vital;
    card3[rand()%diff]=vital;
    card4[rand()%diff]=vital;
    card5[rand()%diff]=vital;
}

void take()
{
    auto start=chrono::steady_clock::now();
    cout<<"enter : ";
    cin>>ans;
    auto end=chrono::steady_clock::now();
    duration = chrono::duration_cast<chrono::seconds>(end - start).count();
    see();
    
}

void display()
{
    int x=1;
    counter++;
    
    cout<<counter<<") ";
    
    if(cards>=5)
    {
        if(x!=1)
        cout<<"   ";
    cout << "card "<<x<<": ";
    for (int i = 0; i < diff; i++) {
        cout << storage[card5[i]]<< " ";
        if(discover_check(card5[i])==true)
            discover[dc++]=card5[i];
    }
    
    cout << endl;
    x++;
    }
    
    if(rand()%2==0)
    {
        if(x!=1)
            cout<<"   ";
        cout <<"card "<<x<<": ";
        for (int i = 0; i < diff; i++) {
            cout << storage[card1[i]] << " ";
            if(discover_check(card1[i])==true)
            discover[dc++]=card1[i];
        }
        x++;
        cout << endl;
        
       
        if(cards>=3)
        {
             if(x!=1)
            cout<<"   ";
        cout << "card "<<x<<": ";
        for (int i = 0; i < diff; i++) {
            cout << storage[card3[i]]<< " ";
            if(discover_check(card3[i])==true)
            discover[dc++]=card3[i];
            
        }
        cout << endl;
        x++;
        }
    }
    else
    {
        
        if(cards>=3)
        {
        if(x!=1)
            cout<<"   ";
        cout << "card "<<x<<": ";
        for (int i = 0; i < diff; i++) {
            cout << storage[card3[i]]<< " ";
            if(discover_check(card3[i])==true)
            discover[dc++]=card3[i];
            
        }
        cout << endl;
        x++;
        }
        if(x!=1)
            cout<<"   ";
        cout <<"card "<<x<<": ";
        for (int i = 0; i < diff; i++) {
            cout << storage[card1[i]] << " ";
            if(discover_check(card1[i])==true)
            discover[dc++]=card1[i];
        }
        x++;
        cout << endl;
    }
    
    if(cards>=4)
    {
    cout << "   card "<<x<<": ";
    for (int i = 0; i < diff; i++) {
        cout << storage[card4[i]]<< " ";
        if(discover_check(card4[i])==true)
            discover[dc++]=card4[i];
        
    }
    cout << endl;
    x++;
    }
    cout << "   card "<<x<<": ";
    for (int i = 0; i < diff; i++) {
        cout << storage[card2[i]]<< " ";
        if(discover_check(card2[i])==true)
            discover[dc++]=card2[i];
       
    }
    cout << endl;
    x++;
    cout<<"   select:  ";
    for(int i=1; i<=diff; i++)
    {
        cout<<i<<"  ";
    }
    cout<<endl;
    
}
int main() {
    //cout<<sizeof(storage)/sizeof(storage[1]);
    srand(time(0));
    cout<<"       -😄- EMOJIFY -😍-"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<endl;
    menu();
    return 0;
}
