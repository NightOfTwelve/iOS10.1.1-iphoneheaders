/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOrthography.h>

@interface NSSimpleOrthography : NSOrthography {

	unsigned _orthographyFlags;

}
+(id)orthographyWithFlags:(unsigned)arg1 ;
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)initWithDominantScript:(id)arg1 languageMap:(id)arg2 ;
-(unsigned)orthographyFlags;
-(id)dominantScript;
-(id)languageMap;
-(id)dominantLanguage;
-(id)allScripts;
-(id)languagesForScript:(id)arg1 ;
-(id)dominantLanguageForScript:(id)arg1 ;
-(id)allLanguages;
-(id)initWithFlags:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(Class)classForCoder;
@end
