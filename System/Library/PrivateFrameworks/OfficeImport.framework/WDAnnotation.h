/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class WDCharacterRun, WDAnnotationData;

@interface WDAnnotation : WDRun {

	int mType;
	WDCharacterRun* mReference;
	BOOL mReferencePopertiesFixed;
	WDAnnotationData* mData;
	WDAnnotation* mOtherEndOfRangedAnnotation;

}
-(void)dealloc;
-(id)description;
-(id)date;
-(id)text;
-(id)data;
-(void)setDate:(id)arg1 ;
-(id)owner;
-(void)setOwner:(id)arg1 ;
-(int)runType;
-(id)reference;
-(BOOL)referencePropertiesFixed;
-(void)setReferencePropertiesFixed;
-(void)setOtherEndOfRangedAnnotation:(id)arg1 ;
-(void)useDataFromOtherEnd;
-(id)initWithParagraph:(id)arg1 type:(int)arg2 ;
-(int)annotationType;
-(id)otherEndOfRangedAnnotation;
@end

