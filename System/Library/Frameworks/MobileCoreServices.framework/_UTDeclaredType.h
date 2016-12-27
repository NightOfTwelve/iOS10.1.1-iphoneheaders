/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/MobileCoreServices-Structs.h>
#import <MobileCoreServices/_UTConcreteType.h>

@protocol OS_dispatch_queue;
@class NSObject, NSUUID, NSNumber, NSString, NSDictionary, NSData, NSURL, NSArray;

@interface _UTDeclaredType : _UTConcreteType {

	NSObject*<OS_dispatch_queue> _additionalInfoQueue;
	unsigned _flags;
	NSUUID* _uuid;
	NSNumber* _version;
	NSString* _unlocalizedDescription;
	NSString* _localizedDescription;
	NSDictionary* _localizedDescriptionDictionary;
	NSData* _declaringBundleBookmark;
	NSString* _declaringBundleDelegate;
	NSURL* _declaringBundleURL;
	NSString* _kextName;
	NSDictionary* _tagSpecification;
	NSArray* _conformsTo;
	NSArray* _iconFiles;
	NSURL* _parentIconURL;
	NSString* _referenceURLString;

}
+(BOOL)supportsSecureCoding;
-(id)initWithContext:(LSContext*)arg1 UTTypeID:(unsigned)arg2 UTTypeData:(const SCD_Struct_UT8*)arg3 ;
-(id)_localizedDescriptionWithPreferredLocalizations:(id)arg1 ;
-(id)declaration;
-(id)declaringBundleURL;
-(BOOL)isDeclared;
-(id)tagSpecification;
-(id)parentIdentifiers;
-(BOOL)_isPublic;
-(BOOL)_isAppleInternal;
-(id)_unlocalizedDescription;
-(id)_localizedDescriptionDictionary;
-(id)_kernelExtensionName;
-(id)_iconURL;
-(BOOL)needsWorkaroundFor22092605;
-(BOOL)validateCollectionTypes;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)_isActive;
-(id)version;
-(id)referenceURL;
@end
