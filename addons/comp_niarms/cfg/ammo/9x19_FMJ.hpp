//9x19 FMJ
class GEGVAR(ammo,TRIPLES(9x19,FMJ,1Rnd)): GEGVAR(core,1Rnd) {
				displayName = CSTRING(9x19_FMJ_1Rnd);
				scope = 2;
				picture = QGPATH(main,data\9mm.paa);
};
class GEGVAR(ammo,TRIPLES(9x19,FMJ,10Rnd)): GEGVAR(core,10Rnd) {
				displayName = CSTRING(9x19_FMJ_10Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(9x19,FMJ,1Rnd));
};
class GEGVAR(ammo,TRIPLES(9x19,FMJ,20Rnd)): GEGVAR(core,20Rnd) {
				displayName = CSTRING(9x19_FMJ_20Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(9x19,FMJ,1Rnd));
};
class GEGVAR(ammo,TRIPLES(9x19,FMJ,30Rnd)): GEGVAR(core,30Rnd) {
				displayName = CSTRING(9x19_FMJ_30Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(9x19,FMJ,1Rnd));
};
class GEGVAR(ammo,TRIPLES(9x19,FMJ,40Rnd)): GEGVAR(core,40Rnd) {
				displayName = CSTRING(9x19_FMJ_40Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(9x19,FMJ,1Rnd));
};
class GEGVAR(ammo,TRIPLES(9x19,FMJ,50Rnd)): GEGVAR(core,50Rnd) {
				displayName = CSTRING(9x19_FMJ_50Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(9x19,FMJ,1Rnd));
};
class GEGVAR(ammo,TRIPLES(9x19,FMJ,60Rnd)): GEGVAR(core,60Rnd) {
				displayName = CSTRING(9x19_FMJ_60Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(9x19,FMJ,1Rnd));
};
