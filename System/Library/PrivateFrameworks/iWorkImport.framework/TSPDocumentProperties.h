/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, TSPDocumentRevision, NSDictionary;

@interface TSPDocumentProperties : NSObject <NSCopying> {

	NSUUID* _versionUUID;
	NSUUID* _shareUUID;
	unsigned long long _fileFormatVersion;
	TSPDocumentRevision* _revision;
	NSDictionary* _additionalProperties;
	NSUUID* _documentUUID;

}

@property (nonatomic,copy) NSUUID * documentUUID;                               //@synthesize documentUUID=_documentUUID - In the implementation block
@property (assign,nonatomic) unsigned long long fileFormatVersion;              //@synthesize fileFormatVersion=_fileFormatVersion - In the implementation block
@property (nonatomic,copy) TSPDocumentRevision * revision;                      //@synthesize revision=_revision - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalProperties;                 //@synthesize additionalProperties=_additionalProperties - In the implementation block
@property (nonatomic,readonly) NSUUID * versionUUID; 
@property (nonatomic,readonly) NSUUID * shareUUID; 
+(id)documentPropertiesRelativePath;
+(id)shareIdentifierRelativePath;
+(id)documentRevisionAtURL:(id)arg1 ;
+(id)documentUUIDAtURL:(id)arg1 ;
+(BOOL)documentIsEncryptedAtURL:(id)arg1 ;
-(NSUUID *)versionUUID;
-(void)setDocumentUUID:(NSUUID *)arg1 ;
-(void)updateVersionUUID;
-(NSUUID *)documentUUID;
-(void)updateDocumentAndShareUUID;
-(void)setFileFormatVersion:(unsigned long long)arg1 ;
-(unsigned long long)fileFormatVersion;
-(BOOL)writeToPackageWriter:(id)arg1 error:(id*)arg2 ;
-(void)updateDocumentUUID;
-(id)initWithDocumentURL:(id)arg1 allowMissingPropertyList:(BOOL)arg2 error:(id*)arg3 ;
-(id)initWithDocumentURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeToDocumentBundleURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithDocumentBundleURL:(id)arg1 allowMissingPropertyList:(BOOL)arg2 error:(id*)arg3 ;
-(id)initWithDocumentFileURL:(id)arg1 allowMissingPropertyList:(BOOL)arg2 error:(id*)arg3 ;
-(void)readDocumentPropertiesFromDictionary:(id)arg1 ;
-(id)initWithFilePackageURL:(id)arg1 zipArchive:(id)arg2 allowMissingPropertyList:(BOOL)arg3 error:(id*)arg4 ;
-(id)UUIDFromDocumentProperties:(id)arg1 key:(id)arg2 ;
-(id)encodedPropertyListWithError:(id*)arg1 ;
-(NSUUID *)shareUUID;
-(BOOL)writeToDocumentURL:(id)arg1 writerBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)initWithPropertiesURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeToPropertiesURL:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRevision:(TSPDocumentRevision *)arg1 ;
-(NSDictionary *)additionalProperties;
-(void)setAdditionalProperties:(NSDictionary *)arg1 ;
-(TSPDocumentRevision *)revision;
@end

