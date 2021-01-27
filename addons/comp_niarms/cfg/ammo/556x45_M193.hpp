//5,56x45 M193 FMJ
class GEGVAR(ammo,TRIPLES(556x45,M193,1Rnd)): GEGVAR(core,1Rnd) {
				displayName = CSTRING(556x45_M193_1Rnd);
				scope = 2;
				picture = QGPATH(main,data\556mm.paa);
};
class GEGVAR(ammo,TRIPLES(556x45,M193,10Rnd)): GEGVAR(core,10Rnd) {
				displayName = CSTRING(556x45_M193_10Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(556x45,M193,1Rnd));
};
class GEGVAR(ammo,TRIPLES(556x45,M193,20Rnd)): GEGVAR(core,20Rnd) {
				displayName = CSTRING(556x45_M193_20Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(556x45,M193,1Rnd));
};
class GEGVAR(ammo,TRIPLES(556x45,M193,30Rnd)): GEGVAR(core,30Rnd) {
				displayName = CSTRING(556x45_M193_30Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(556x45,M193,1Rnd));
};
class GEGVAR(ammo,TRIPLES(556x45,M193,40Rnd)): GEGVAR(core,40Rnd) {
				displayName = CSTRING(556x45_M193_40Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(556x45,M193,1Rnd));
};
class GEGVAR(ammo,TRIPLES(556x45,M193,50Rnd)): GEGVAR(core,50Rnd) {
				displayName = CSTRING(556x45_M193_50Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(556x45,M193,1Rnd));
};
class GEGVAR(ammo,TRIPLES(556x45,M193,60Rnd)): GEGVAR(core,60Rnd) {
				displayName = CSTRING(556x45_M193_60Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(556x45,M193,1Rnd));
};
