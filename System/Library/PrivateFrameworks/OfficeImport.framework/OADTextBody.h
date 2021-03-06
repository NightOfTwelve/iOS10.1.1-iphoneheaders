/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OADTextBodyProperties, NSMutableArray, OADTextListStyle;

@interface OADTextBody : NSObject {

	OADTextBodyProperties* mProperties;
	NSMutableArray* mParagraphs;
	OADTextListStyle* mTextListStyle;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)isEmpty;
-(void)setProperties:(id)arg1 ;
-(id)properties;
-(id)paragraphAtIndex:(unsigned long long)arg1 ;
-(id)plainText;
-(unsigned long long)paragraphCount;
-(id)addParagraph;
-(id)overrideTextListStyle;
-(id)textListStyle;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)flattenProperties;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ownTextListStyle:(BOOL)arg2 ;
-(BOOL)propagateActualTextStyleToTextListStyle;
-(unsigned long long)nonEmptyParagraphCount;
-(void)removeAllParagraphs;
-(unsigned long long)newLineCount;
-(id)firstParagraphEffects;
-(void)applyTextListStyle:(id)arg1 ;
-(void)removeTrailingNewlines;
-(void)removeLeadingNewlines;
-(void)removeLastParagraphIfEmpty;
-(BOOL)isSimilarToTextBody:(id)arg1 ;
-(void)removeUnnecessaryOverrides;
-(void)addParagraphsFromTextBody:(id)arg1 ;
-(id)findFirstTextRunOfClass:(Class)arg1 ;
@end

