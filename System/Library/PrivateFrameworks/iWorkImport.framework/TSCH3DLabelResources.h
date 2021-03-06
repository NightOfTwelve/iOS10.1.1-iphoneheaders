/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DStringIndexedResources.h>

@class NSMutableDictionary, TSCH3DTextureAtlas;

@interface TSCH3DLabelResources : TSCH3DStringIndexedResources {

	NSMutableDictionary* mCache;
	TSCH3DTextureAtlas* mAtlas;

}

@property (nonatomic,readonly) TSCH3DTextureAtlas * atlas; 
-(void)setParagraphStyle:(id)arg1 forKey:(unsigned long long)arg2 atIndex:(const tvec2<int>*)arg3 ;
-(void)setParagraphStyle:(id)arg1 atIndex:(const tvec2<int>*)arg2 ;
-(id)resourceAtIndex:(const tvec2<int>*)arg1 string:(id)arg2 bitmapContextInfo:(id)arg3 labelWidth:(double)arg4 ;
-(id)prepareTextureAtlasWithSamples:(float)arg1 ;
-(id)paragraphStyleForKey:(unsigned long long)arg1 defaultStyle:(id)arg2 ;
-(void)dealloc;
-(id)initWithSize:(const tvec2<int>*)arg1 ;
-(TSCH3DTextureAtlas *)atlas;
@end

