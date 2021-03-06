/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class NSString;

@interface CPLPersonChange : CPLRecordChange {

	NSString* _fullName;
	NSString* _personID;
	long long _personType;
	long long _manualSortOrder;

}

@property (nonatomic,copy) NSString * fullName;                      //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,copy) NSString * personID;                      //@synthesize personID=_personID - In the implementation block
@property (assign,nonatomic) long long personType;                   //@synthesize personType=_personType - In the implementation block
@property (assign,nonatomic) long long manualSortOrder;              //@synthesize manualSortOrder=_manualSortOrder - In the implementation block
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
-(long long)personType;
-(long long)manualSortOrder;
-(void)setPersonType:(long long)arg1 ;
-(void)setManualSortOrder:(long long)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)fullName;
-(BOOL)supportsDeletion;
@end

