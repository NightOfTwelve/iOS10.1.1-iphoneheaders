/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTExpressionNode.h>

@class NSString;

@interface TSTLetNode : TSTExpressionNode {

	NSString* _whitespaceAfterLet;
	NSString* _whitespaceAfterIdentifier;
	NSString* _whitespaceAfterEquals;
	NSString* _whitespaceAfterDelimiter;

}

@property (nonatomic,retain) NSString * whitespaceAfterLet;                     //@synthesize whitespaceAfterLet=_whitespaceAfterLet - In the implementation block
@property (nonatomic,retain) NSString * whitespaceAfterIdentifier;              //@synthesize whitespaceAfterIdentifier=_whitespaceAfterIdentifier - In the implementation block
@property (nonatomic,retain) NSString * whitespaceAfterEquals;                  //@synthesize whitespaceAfterEquals=_whitespaceAfterEquals - In the implementation block
@property (nonatomic,retain) NSString * whitespaceAfterDelimiter;               //@synthesize whitespaceAfterDelimiter=_whitespaceAfterDelimiter - In the implementation block
+(id)letString;
+(id)defaultNameWithIndex:(unsigned)arg1 ;
+(id)newBareLetNodeWithContext:(id)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(LetNodeArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const LetNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(BOOL)isEqualToExpressionNode:(id)arg1 ;
-(id)formulaPlainText;
-(id)argumentSpec;
-(id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3 ;
-(TSTCSENodeData)recordHashesForSubexpressions:(id)arg1 ;
-(id)copyByResolvingIdentifiers:(id)arg1 hostTable:(id)arg2 forceReferenceInterpretation:(BOOL)arg3 symbolTable:(TSCESymbolTable*)arg4 oldToNewNodeMap:(id)arg5 ;
-(void)buildASTNodeArray:(TSCEASTNodeArray*)arg1 hostCell:(TSUCellCoord)arg2 symbolTable:(TSCESymbolTable*)arg3 ;
-(void)addVariablesMatchingPrefix:(id)arg1 forFormulaIndex:(unsigned long long)arg2 toDictionary:(id)arg3 symbolTable:(TSCESymbolTable*)arg4 ;
-(void)addAllIdentifiersToSymbolTable:(TSCESymbolTable*)arg1 ;
-(void)setWhitespaceAfterDelimiter:(NSString *)arg1 ;
-(id)initWithContext:(id)arg1 children:(id)arg2 ;
-(void)setWhitespaceAfterLet:(NSString *)arg1 ;
-(void)setWhitespaceAfterIdentifier:(NSString *)arg1 ;
-(void)setWhitespaceAfterEquals:(NSString *)arg1 ;
-(void)p_fixupNodeIfFunctionNode:(id)arg1 ;
-(NSString *)whitespaceAfterLet;
-(NSString *)whitespaceAfterIdentifier;
-(NSString *)whitespaceAfterEquals;
-(NSString *)whitespaceAfterDelimiter;
-(unsigned)boundSymbol;
-(void)dealloc;
-(id)string;
-(int)tokenType;
-(void)setChildren:(id)arg1 ;
@end
