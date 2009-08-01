/*
---------------------------------------------------------------------------
Open Asset Import Library (ASSIMP)
---------------------------------------------------------------------------

Copyright (c) 2006-2008, ASSIMP Development Team

All rights reserved.

Redistribution and use of this software in source and binary forms,
with or without modification, are permitted provided that the following
conditions are met:

 * Redistributions of source code must retain the above
  copyright notice, this list of conditions and the
  following disclaimer.

 * Redistributions in binary form must reproduce the above
  copyright notice, this list of conditions and the
  following disclaimer in the documentation and/or other
  materials provided with the distribution.

 * Neither the name of the ASSIMP team, nor the names of its
  contributors may be used to endorse or promote products
  derived from this software without specific prior
  written permission of the ASSIMP Development Team.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
---------------------------------------------------------------------------
 */

#pragma once

#include "IOSystem.h"
#include "Scene.h"

using namespace System;

namespace AssimpNET
{
	public ref struct aiMemoryInfo
	{
		property unsigned int animations
		{
			unsigned int get() { throw gcnew System::NotImplementedException();}
			void set(unsigned int value) { throw gcnew System::NotImplementedException();}
		}

		property unsigned int cameras
		{
			unsigned int get() { throw gcnew System::NotImplementedException();}
			void set(unsigned int value) { throw gcnew System::NotImplementedException();}
		}

		property unsigned int lights
		{
			unsigned int get() { throw gcnew System::NotImplementedException();}
			void set(unsigned int value) { throw gcnew System::NotImplementedException();}
		}

		property unsigned int materials
		{
			unsigned int get() { throw gcnew System::NotImplementedException();}
			void set(unsigned int value) { throw gcnew System::NotImplementedException();}
		}

		property unsigned int meshes
		{
			unsigned int get() { throw gcnew System::NotImplementedException();}
			void set(unsigned int value) { throw gcnew System::NotImplementedException();}
		}

		property unsigned int nodes
		{
			unsigned int get() { throw gcnew System::NotImplementedException();}
			void set(unsigned int value) { throw gcnew System::NotImplementedException();}
		}

		property unsigned int textures
		{
			unsigned int get() { throw gcnew System::NotImplementedException();}
			void set(unsigned int value) { throw gcnew System::NotImplementedException();}
		}

		property unsigned int total
		{
			unsigned int get() { throw gcnew System::NotImplementedException();}
			void set(unsigned int value) { throw gcnew System::NotImplementedException();}
		}
	};
	
	public ref class Importer
	{
	public:
		Importer(void);
		Importer(const Importer^ other);
		~Importer(void);

		void FreeScene();
		array<char>^ GetErrorString();
		void GetExtensionsList(String^ extensions);
		IOSystem^ GetIOHandler();
		void GetMemoryRequrements(aiMemoryInfo^ in);
		Scene^ getOrphanedScene( );
		float GetPropertyFloat(array<char>^ propName);
		int GetPropertyInt(array<char>^ propName);
		String^ GetPrpertyString(array<char>^ propName);
		Scene^ getScene();
		bool IsDefaultIOHandler();
		bool IsExtensionSupported(array<char>^ extension);
		bool IsExtensionSupported(String^ extension);
		Scene^ ReadFile(array<char>^ fileName, unsigned int flags);
		Scene^ ReadFile(String^ fileName, unsigned int flags);
		void SetExtraVerbose(bool verbose);
		void SetIOHanlder(IOSystem^ ioHandler);
		void SetPropertyFloat(array<char>^ propName, float value);
		void SetPropertyInt(array<char>^ propName, int value);
		void SetPrpertyString(array<char>^ propName, String^ value);
		bool ValidateFlags(unsigned int flags);
	
	};
}//namespace