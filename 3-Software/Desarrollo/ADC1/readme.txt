//------------------------------------------------------------------------
//  Readme.txt
//------------------------------------------------------------------------
==========================================================================
                   Evaluation Project for AURIX TC375
==========================================================================
                   Microelectrónica Maser
                   Kurutz Gain, 20850 Mendaro
                    Tel.: +34 943 742669

==========================================================================
History
Date				Ver			Author			AURIX DS		PinMapper		FW_TC37A					VS				Description
14/01/2025 	1.00		J.Vicandi		1.10.6			1.3					iLLD_1_0_1_17_0		V7.5			Versión inicial
14/02/2025 	1.01		J.Vicandi		1.10.6			1.3					iLLD_1_0_1_17_0		V7.5
//------------------------------------------------------------------------
// Project structure
//------------------------------------------------------------------------
The project generated contains various files/folders in Led1 folder:

- readme.txt: this file
- Debug: folder with the application object and executable code
- Libraries: Ficheros de biblioteca y configuración de PinMapper y OneEye.
- Configurations: Contiene el fichero de arranque o Startup.
- .ads:
- .settings: Ajustes para compilador, linker, etc

Ver. 1.00
Conmutamos dos led en un bucle. Hemos utilizado el Pinmapper.
elfsize  "ADC1.elf"
Total sizes:
ROM: 0x37b4 (14260) = code: 0x2458 (9304) + romdata: 0x135c (4956)
RAM: 0x8494 (33940) = data + bss
Finished building: ADC1.siz
17:00:35 Build Finished. 0 errors, 0 warnings. (took 172ms) 

Ver. 1.01
Realizamos conversiones en un solo canal disparando por software.
elfsize  "ADC1.elf"
Total sizes:
ROM: 0x48e4 (18660) = code: 0x3388 (13192) + romdata: 0x155c (5468)
RAM: 0x8598 (34200) = data + bss
Finished building: ADC1.siz
17:00:35 Build Finished. 0 errors, 0 warnings. (took 172ms) 