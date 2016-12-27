/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTCellRegionIterating.h>

@class NSString;

@interface TSTCellRegionRowMajorIterator : NSObject <TSTCellRegionIterating> {

	set<TSUCellRect, TSTCellRangeRowMajorLess, std::__1::allocator<TSUCellRect> >* mCellRangeSet;
	TSUCellCoord mCellID;
	TSUCellRect mBoundingCellRange;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TSUCellCoord)getNext;
-(id)initWithCellRegion:(id)arg1 ;
-(void)dealloc;
-(void)terminate;
@end
