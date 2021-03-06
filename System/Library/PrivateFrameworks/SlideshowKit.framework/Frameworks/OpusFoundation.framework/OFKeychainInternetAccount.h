/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface OFKeychainInternetAccount : NSObject {

	NSMutableDictionary* _keychainData;
	NSMutableDictionary* _keychainQuery;

}

@property (retain) NSMutableDictionary * keychainData;               //@synthesize keychainData=_keychainData - In the implementation block
@property (retain) NSMutableDictionary * keychainQuery;              //@synthesize keychainQuery=_keychainQuery - In the implementation block
+(id)accountWithURL:(id)arg1 andAccount:(id)arg2 ;
-(id)password;
-(void)setPassword:(id)arg1 ;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(id)server;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isValid;
-(id)path;
-(id)port;
-(id)account;
-(id)secItemFormatToDictionary:(id)arg1 ;
-(void)writeToKeychain;
-(id)dictionaryToSecItemFormat:(id)arg1 ;
-(void)setKeychainQuery:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)keychainQuery;
-(void)setKeychainData:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)keychainData;
-(id)initWithURL:(id)arg1 andAccount:(id)arg2 ;
-(BOOL)deleteFromKeychain;
@end

