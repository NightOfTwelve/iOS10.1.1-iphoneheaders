/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VKTile.h>

@class NSArray;

@interface VKResourcesTile : VKTile {

	NSArray* _resourceNames;
	NSArray* _attributions;

}

@property (nonatomic,retain) NSArray * resourceNames;              //@synthesize resourceNames=_resourceNames - In the implementation block
@property (nonatomic,retain) NSArray * attributions;               //@synthesize attributions=_attributions - In the implementation block
-(void)dealloc;
-(NSArray *)attributions;
-(void)setAttributions:(NSArray *)arg1 ;
-(void)setResourceNames:(NSArray *)arg1 ;
-(NSArray *)resourceNames;
@end
