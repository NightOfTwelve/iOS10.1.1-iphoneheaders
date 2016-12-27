/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSString;

@interface JaliscoGeniusOptOutOperation : CloudLibraryOperation {

	NSString* _cuid;

}

@property (nonatomic,copy) NSString * cuid;              //@synthesize cuid=_cuid - In the implementation block
-(id)initWithCUID:(id)arg1 ;
-(NSString *)cuid;
-(void)_sendOptOutWithCUID:(id)arg1 ;
-(void)setCuid:(NSString *)arg1 ;
-(void)main;
@end
