/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:40:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NFPreferenceObserver : NSObject {

	/*^block*/id _callback;

}

@property (copy) id callback;              //@synthesize callback=_callback - In the implementation block
-(void)dealloc;
-(void)stop;
-(void)start;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)updateDiagnosticLogging;
-(void)handlePreferencesChanged;
-(void)handleProfilesChanged;
@end

