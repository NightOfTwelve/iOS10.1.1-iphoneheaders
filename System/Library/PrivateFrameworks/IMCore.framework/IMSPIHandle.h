/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, IMPerson;

@interface IMSPIHandle : NSObject {

	NSString* _address;
	IMPerson* _person;
	int _abIdentifier;

}

@property (retain) NSString * address;                    //@synthesize address=_address - In the implementation block
@property (retain) IMPerson * person;                     //@synthesize person=_person - In the implementation block
@property (assign) int abIdentifier;                      //@synthesize abIdentifier=_abIdentifier - In the implementation block
@property (readonly) NSString * displayName; 
@property (readonly) NSString * identifier; 
@property (readonly) NSString * cnContactID; 
-(id)description;
-(NSString *)identifier;
-(NSString *)displayName;
-(void)setPerson:(IMPerson *)arg1 ;
-(IMPerson *)person;
-(void)setAddress:(NSString *)arg1 ;
-(NSString *)cnContactID;
-(int)abIdentifier;
-(void)setAbIdentifier:(int)arg1 ;
-(NSString *)address;
@end
