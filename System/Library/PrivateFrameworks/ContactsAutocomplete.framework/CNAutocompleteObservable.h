/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@class NSString, CNObservable;

@interface CNAutocompleteObservable : CNObservable {

	NSString* _debugDescription;
	CNObservable* _observable;

}

@property (nonatomic,retain) CNObservable * observable;                //@synthesize observable=_observable - In the implementation block
@property (nonatomic,retain) NSString * debugDescription;              //@synthesize debugDescription=_debugDescription - In the implementation block
-(NSString *)debugDescription;
-(CNObservable *)observable;
-(void)setObservable:(CNObservable *)arg1 ;
-(id)subscribe:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)setDebugDescription:(NSString *)arg1 ;
@end
