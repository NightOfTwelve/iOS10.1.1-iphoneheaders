/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFetchOperation.h>

@class FCRecordSource, NSArray, NSDictionary, FCInterestToken;

@interface FCRecordsFetchOperation : FCFetchOperation {

	FCRecordSource* _recordSource;
	NSArray* _recordIdentifiers;
	NSArray* _ignoreCacheForRecordIDs;
	NSDictionary* _holdTokens;
	FCInterestToken* _fetchToken;
	FCInterestToken* _refreshToken;

}
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)initWithRecordSource:(id)arg1 recordIdentifiers:(id)arg2 ;
-(id)initWithRecordSource:(id)arg1 recordIdentifiers:(id)arg2 ignoreCacheForRecordIDs:(id)arg3 ;
@end

