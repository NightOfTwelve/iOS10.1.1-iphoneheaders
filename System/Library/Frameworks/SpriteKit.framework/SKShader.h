/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, NSArray, NSMutableDictionary, NSString, NSPointerArray;

@interface SKShader : NSObject <NSCopying, NSCoding> {

	NSMutableArray* _uniforms;
	NSArray* _attributes;
	NSMutableDictionary* _uniformData;
	NSString* _source;
	NSString* _fileName;
	NSString* _compileLog;
	BOOL _programDirty;
	BOOL _programWithTransformDirty;
	NSPointerArray* _targetNodes;
	BOOL _usesTimeUniform;
	BOOL _usesSpriteSizeUniform;
	shared_ptr<jet_program>* _backingProgram;
	shared_ptr<jet_program>* _backingProgramWithTransform;
	map<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> > > >* _attributeBuffers;
	BOOL _performFullCapture;

}

@property (readonly) NSArray * _textureUniforms; 
@property (readonly) map<std::__1::basic_string<char>* _attributeBuffers; 
@property (readonly) shared_ptr<jet_program>* _backingProgram; 
@property (readonly) shared_ptr<jet_program>* _backingProgramWithTransform; 
@property (readonly) shared_ptr<jet_command_buffer>* _commands; 
@property (assign) BOOL performFullCapture;                                              //@synthesize performFullCapture=_performFullCapture - In the implementation block
@property (copy) NSString * source; 
@property (copy) NSArray * uniforms; 
@property (nonatomic,copy) NSArray * attributes; 
+(id)shaderWithFileNamed:(id)arg1 ;
+(id)shader;
+(id)shaderWithSource:(id)arg1 uniforms:(id)arg2 ;
+(id)shaderWithSource:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)attributes;
-(void)setAttributes:(NSArray *)arg1 ;
-(NSString *)source;
-(id)initWithSource:(id)arg1 ;
-(map<std::__1::basic_string<char>*)_attributeBuffers;
-(BOOL)_usesTimeUniform;
-(BOOL)performFullCapture;
-(void)setPerformFullCapture:(BOOL)arg1 ;
-(void)_removeTargetNode:(id)arg1 ;
-(void)_addTargetNode:(id)arg1 ;
-(id)initWithSource:(id)arg1 uniforms:(id)arg2 ;
-(id)_getLegacyUniformData;
-(id)_getMetalVertexOutDefinition;
-(id)_fullVertexSourceWithImplementation:(long long)arg1 ;
-(void)generateVertexAttributeDeclares:(id*)arg1 statements:(id*)arg2 ;
-(void)generateFragmentAttributeDeclares:(id*)arg1 ;
-(id)fragmentPrelude;
-(id)_fullMetalVertexSourceWithImplementation:(BOOL)arg1 ;
-(id)fragmentPreludeMetal;
-(id)_generateMetalSource;
-(shared_ptr<jet_program>*)_backingProgram;
-(shared_ptr<jet_program>*)_makeBackingProgramWithImplementation:(long long)arg1 ;
-(id)fullMetalVertexSource;
-(id)fullMetalVertexWithTransformSource;
-(id)fullMetalFragmentSource;
-(id)fullVertexSource;
-(id)fullVertexWithTransformSource;
-(id)fullFragmentSource;
-(shared_ptr<jet_command_buffer>*)_commandsForBatchOffset:(int)arg1 count:(int)arg2 ;
-(id)_getMetalFragmentFunctionName;
-(NSArray *)uniforms;
-(void)addUniform:(id)arg1 ;
-(id)uniformNamed:(id)arg1 ;
-(void)removeUniformNamed:(id)arg1 ;
-(NSArray *)_textureUniforms;
-(BOOL)_backingProgramIsDirty;
-(shared_ptr<jet_program>*)_backingProgramWithTransform;
-(shared_ptr<jet_command_buffer>*)_commands;
-(id)_getShaderCompilationLog;
-(void)_setUniformsDirty;
-(void)setUniforms:(NSArray *)arg1 ;
@end

