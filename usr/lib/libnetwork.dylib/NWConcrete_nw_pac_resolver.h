/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:40:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_pac_resolver.h>

@class NSString;

@interface NWConcrete_nw_pac_resolver : NSObject <OS_nw_pac_resolver> {

	/*^block*/id result_block;
	CFURLRef endpointURL;
	CFURLRef pacURL;
	CFStringRef pacScript;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
@end
