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
10/12/2024 	1.01		J.Vicandi		1.10.6			1.3					iLLD_1_0_1_17_0		V7.5			Versión inicial
13/12/2024 	1.02		J.Vicandi		1.10.6			1.3					iLLD_1_0_1_17_0		V7.5			Versión inicial 
//------------------------------------------------------------------------
// Project structure
//------------------------------------------------------------------------
The project generated contains various files/folders in Led1 folder:

- readme.txt: this file
- Tricore Debug (TASKING): folder with the application object and executable code
- Libraries: Ficheros de biblioteca y configuración de PinMapper y OneEye.
- Configurations: Contiene el fichero de arranque o Startup.
- VSSrc: Source code generated from Visual State 7.5
- VSAPI: Interface code with State Chart from VS
- VS: State Chart Project in Visual State 7.5
- .ads:
- .settings: Ajustes para compilador, linker, etc


Ver. 1.01
Conmutamos un led y comenzamos a incluir lo necesario para usar un osciloscopio en OneEye.
elfsize  "Led1.elf"
Total sizes:
ROM: 0x3cbb (15547) = code: 0x2910 (10512) + romdata: 0x13ab (5035)
RAM: 0xe832 (59442) = data + bss
Finished building: Led1.siz
18:52:57 Build Finished. 0 errors, 4 warnings. (took 2s.302ms)

Ver. 1.02
Conmutamos un led y seguimos incluiendo lo necesario para usar un osciloscopio en OneEye.
Incluimos pragmas en Ifx_Osci.c para evitar los warnings. Se opta por esa opción en vez de modificar el código fuente.
elfsize  "Led1.elf"
Total sizes:
ROM: 0x3cbb (15547) = code: 0x2910 (10512) + romdata: 0x13ab (5035)
RAM: 0xe832 (59442) = data + bss
Finished building: Led1.siz
 16:50:53 Build Finished. 0 errors, 0 warnings. (took 2s.407ms)
