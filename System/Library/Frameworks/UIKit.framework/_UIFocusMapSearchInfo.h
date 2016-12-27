/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface _UIFocusMapSearchInfo : NSObject {

	NSMutableArray* _mutableSnapshots;
	NSMutableArray* _mutableDestinationRegions;

}

@property (nonatomic,retain) NSMutableArray * mutableSnapshots;                       //@synthesize mutableSnapshots=_mutableSnapshots - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableDestinationRegions;              //@synthesize mutableDestinationRegions=_mutableDestinationRegions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * snapshots; 
@property (nonatomic,copy,readonly) NSArray * destinationRegions; 
-(id)init;
-(NSArray *)destinationRegions;
-(void)addSnapshot:(id)arg1 ;
-(void)addDestinationRegion:(id)arg1 ;
-(NSMutableArray *)mutableSnapshots;
-(NSMutableArray *)mutableDestinationRegions;
-(NSArray *)snapshots;
-(void)setMutableSnapshots:(NSMutableArray *)arg1 ;
-(void)setMutableDestinationRegions:(NSMutableArray *)arg1 ;
@end
