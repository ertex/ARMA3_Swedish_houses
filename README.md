# ARMA3_Swedish_houses
Repository for managing the arma 3 mod of swedish houses pack
Bästa videon om hur mnan gör ett ARMA mod jag hittat https://www.youtube.com/watch?v=GxGIgurkzW4

Arma 3 toolbox till Blender https://github.com/AlwarrenSidh/ArmAToolbox

texturdata som stödjs av ARMA3 https://community.bistudio.com/wiki/TexView_2_Manual
Rekomenderade att använda är en diffusemap (_CO), normalmap (_NO), specular/roughness (_SM)
    om man vill få det att bli snyggare är en Ambient shadow textur rekomenderad med (_AS)


Hus skall stå på YX planet i blender. Detta blir markkontakt punkten in-game. För att få huset att se bättre ut rätt enkelt, lägg till en husgrund i -Z koordinat så det inte flyger på ojämn mark.


Vad skall skapas i Blender?
    ett hus skall existera i minst 3 LOD (fler är bättre). LOD är 'Level of detail' så när man går ifrån huset sjunker upplösningen på det så FPSen inte dör. 
    En bra regel att följa är att varje LOD skall halvera mängden trianglar (trappas av snabbare om man är lat) den sista LODen skall bara vara en kub med rätt färg typ. Exempelvis ,
    LOD 0 polygoner = 20'000. LOD 1 = 10'000 LOD 2 = 2'000 LOD 3 = 300

    LODs skall heta 0,1,2,3 ... där 0 är den mest högupplösta. Se bild nedan

    En kollisions geometri. Denna agerar som kollision för spelare. Bör hållas mycket konservativ i triangelvärden. 
    Om så önskas kan en sepprat geometri för eldstrid göras, typ så man kan använda skytegluggar man inte kan gå ut igenom, annars används samma.
    kollisions geometrin skall heta 'geom' och **måste** vara ett konvext skrov. Vill man ha ett icke-konvekt skrov får man dela upp det i Komponenter (se nedan).

    Shadow genomeri. Geometi som används för att generera skuggor. skall heta 'shadow' Även denna skall vara konservativ med mängden trianglar.
    Skuggeometrin bör ligga lite innanför LOD geometrin för att unvika buggar i belysningen, tänk 10% av väggtjockleken innanför eller en decimeter.

    Texturering/UV mappning.
    Det lättaste är att använda en texturkarta för hela huset, det skall gå att använda flera om man delar upp huset i Komponenter. Men är bökigare.
    Följ vanlig Blender UV-mappningstekniker här, överlappa inte UV-mappen utanför bilden för att tilea dock.
    Använd texturdata för Diffuse,Normal,Roughness i ett 2048x2048 format


Komponenter:
    Komponenter i Arma 3 behövs exempelvis för kollisionsgenomeri. Dessa är i stor sett bara en vertex-grupp i blender världen. Markera dina vertex som bildar ett convext skrov och lägg de till en vertexgrupp.
    Dessa grupper MÅSTE heta Component01 , Component02 , Component03 osv.. det betyder att det max får finnas 99 Komponenter.
    Det finns en inbyggd funktion i Arma 3 tools för detta som funkar ibland.
    Bygg din geometri av simpla block och ta sedan och öppna "Arma3 tools" till höger om viewport, under "Arma tools" finns en "Create Geomety Components" som försöker göra Komponenter åt dig
    Dubbelkolla så den gör rätt bara.


Workflow i Blender:
Installera ARMA3 toolbox till Blender. (se länk ovan)
Starta sedan blender och töm hela scenen och modelera ett hus med <30'000 trianglar (inte en hård gräns. stora hus = mer trianglar)
Se till att du inte har några N-gons innan du börjar med texturering.
Sammla ihop texturer som du vill använda till huset exempelvis från https://ambientcg.com/ och kombinera de till en karta. (Substance painter vet jag funkar med)
UV unwrap huset och sånt. kolla upp hur man gör det på youtube eller nått. (Jag kommer bara göra det sämre).
Skapa LODar till huset, förslagsvis via 'Decimate' modifiern.
Se till att LODarna ser ok ut, tänk på att de kommer synas på avstånd.
Skapa kollisionsgenomeri och Skuggeometrin.

Markera '0' och öppna Arma3 toolbaren till höger om din viewport och bocka i "Arma Object properties"
LOD preset skall vara "Custom" på Resolution 0. Lägg sedan till en "Named Properties" vid namn "lodnoshadow" med värde 1.
Gör samma steg för de andra LODarna med, fast ändra "Resolution" till upplösningen de skall ha (namnet)

Markera 'geom' och sätt den som LOD preset "View Geometri"
Markera 'shadow' och sätt den som LOD preset "Shadow Volume" med värde 0

===mer specfika grejer som alla inte behöver göra.===

Sätt Materialinställningarna på materialen via materials tabbel och välj filsökvägen för PAA filerna och RVmappen under "Arma toolbox material settings". endast synlig om en LOD är markerad.

