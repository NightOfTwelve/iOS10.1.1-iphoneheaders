/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSURL;

@interface UpNextWidget.Alarm : NSObject <NSSecureCoding> {

	 title;
	 fireDate;
	 clockAppSectionURL;
	 identifier;

}

@property (copy,nonatomic) NSString * title; 
@property (retain,nonatomic) NSDate * fireDate; 
@property (retain,nonatomic) NSURL * clockAppSectionURL; 
@property (copy,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) NSString * shallowDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(void)setFireDate:(NSDate *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)fireDate;
-(NSURL *)clockAppSectionURL;
-(void)setClockAppSectionURL:(NSURL *)arg1 ;
-(NSString *)shallowDescription;
-(id)initWithTitle:(id)arg1 fireDate:(id)arg2 identifier:(id)arg3 clockAppSectionURL:(id)arg4 ;
@end
