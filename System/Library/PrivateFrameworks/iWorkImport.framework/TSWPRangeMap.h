/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSWPRangeMap : NSObject {

	NSRange _subRange;
	vector<_TSWPCharIndexAndAffinity, std::__1::allocator<_TSWPCharIndexAndAffinity> >* _unmappedIndexes;
	vector<_TSWPCharIndexAndAffinity, std::__1::allocator<_TSWPCharIndexAndAffinity> >* _mappedIndexes;

}
-(NSRange)mappedCharRange:(NSRange)arg1 ;
-(unsigned long long)unmappedCharIndex:(unsigned long long)arg1 ;
-(NSRange)unmappedCharRange:(NSRange)arg1 ;
-(unsigned long long)mappedCharIndex:(unsigned long long)arg1 ;
-(id)initWithSubRange:(NSRange)arg1 unmappedIndexes:(const vector<unsigned long, std::__1::allocator<unsigned long> >*)arg2 affinity:(int)arg3 ;
-(unsigned long long)p_extendLeftMappedIndex:(unsigned long long)arg1 ;
-(unsigned long long)p_extendRightMappedIndex:(unsigned long long)arg1 ;
-(id)initWithSubRange:(NSRange)arg1 unmappedPairIndexes:(const vector<unsigned long, std::__1::allocator<unsigned long> >*)arg2 ;
-(id)initWithSubRange:(NSRange)arg1 unmappedIndexes:(const vector<unsigned long, std::__1::allocator<unsigned long> >*)arg2 isBackwardAffinities:(const vector<bool, std::__1::allocator<bool> >*)arg3 ;
-(void)adjustByDelta:(long long)arg1 startingAt:(unsigned long long)arg2 ;
@end

