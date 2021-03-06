/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <LinkPresentation/LinkPresentation-Structs.h>
@class NSMutableArray;

@interface LPURLSuffixChecker : NSObject {

	SCD_Struct_LP3* _trie;
	unsigned _trieNodeCount;
	unsigned long long _maxLength;
	NSMutableArray* _failedSuffixes;

}
-(void)dealloc;
-(BOOL)hasSuffix:(id)arg1 ;
-(id)initWithSuffixes:(id)arg1 ;
-(BOOL)insertString:(id)arg1 intoTrieWithCache:(SCD_Struct_LP5*)arg2 ;
-(void)addStringToFailedSuffixes:(id)arg1 ;
@end

