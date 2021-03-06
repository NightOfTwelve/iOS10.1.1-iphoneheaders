/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOTileSet : PBCodable <NSCopying> {

	NSString* _baseURL;
	int _checksumType;
	NSMutableArray* _countryRegionWhitelists;
	unsigned _dataSet;
	NSString* _localizationURL;
	NSString* _multiTileURL;
	int _scale;
	int _size;
	int _style;
	NSMutableArray* _supportedLanguages;
	int _updateBehavior;
	NSMutableArray* _validVersions;
	BOOL _multiTileURLUsesStatusCodes;
	SCD_Struct_GE69 _has;

}

@property (nonatomic,readonly) BOOL hasBaseURL; 
@property (nonatomic,retain) NSString * baseURL;                                    //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) BOOL hasMultiTileURL; 
@property (nonatomic,retain) NSString * multiTileURL;                               //@synthesize multiTileURL=_multiTileURL - In the implementation block
@property (assign,nonatomic) int style;                                             //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSMutableArray * validVersions;                        //@synthesize validVersions=_validVersions - In the implementation block
@property (assign,nonatomic) int scale;                                             //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) int size;                                              //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizationURL; 
@property (nonatomic,retain) NSString * localizationURL;                            //@synthesize localizationURL=_localizationURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * supportedLanguages;                   //@synthesize supportedLanguages=_supportedLanguages - In the implementation block
@property (assign,nonatomic) BOOL hasMultiTileURLUsesStatusCodes; 
@property (assign,nonatomic) BOOL multiTileURLUsesStatusCodes;                      //@synthesize multiTileURLUsesStatusCodes=_multiTileURLUsesStatusCodes - In the implementation block
@property (assign,nonatomic) BOOL hasUpdateBehavior; 
@property (assign,nonatomic) int updateBehavior;                                    //@synthesize updateBehavior=_updateBehavior - In the implementation block
@property (nonatomic,retain) NSMutableArray * countryRegionWhitelists;              //@synthesize countryRegionWhitelists=_countryRegionWhitelists - In the implementation block
@property (assign,nonatomic) BOOL hasChecksumType; 
@property (assign,nonatomic) int checksumType;                                      //@synthesize checksumType=_checksumType - In the implementation block
@property (assign,nonatomic) BOOL hasDataSet; 
@property (assign,nonatomic) unsigned dataSet;                                      //@synthesize dataSet=_dataSet - In the implementation block
+(Class)validVersionType;
+(Class)supportedLanguageType;
+(Class)countryRegionWhitelistType;
-(int)size;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setScale:(int)arg1 ;
-(int)style;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)scale;
-(void)setSize:(int)arg1 ;
-(void)setStyle:(int)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)baseURL;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasBaseURL;
-(BOOL)hasMultiTileURL;
-(id)styleAsString:(int)arg1 ;
-(int)StringAsStyle:(id)arg1 ;
-(void)clearValidVersions;
-(void)addValidVersion:(id)arg1 ;
-(unsigned long long)validVersionsCount;
-(id)validVersionAtIndex:(unsigned long long)arg1 ;
-(id)scaleAsString:(int)arg1 ;
-(int)StringAsScale:(id)arg1 ;
-(id)sizeAsString:(int)arg1 ;
-(int)StringAsSize:(id)arg1 ;
-(BOOL)hasLocalizationURL;
-(void)clearSupportedLanguages;
-(void)addSupportedLanguage:(id)arg1 ;
-(unsigned long long)supportedLanguagesCount;
-(id)supportedLanguageAtIndex:(unsigned long long)arg1 ;
-(void)setMultiTileURLUsesStatusCodes:(BOOL)arg1 ;
-(void)setHasMultiTileURLUsesStatusCodes:(BOOL)arg1 ;
-(BOOL)hasMultiTileURLUsesStatusCodes;
-(int)updateBehavior;
-(void)setUpdateBehavior:(int)arg1 ;
-(void)setHasUpdateBehavior:(BOOL)arg1 ;
-(BOOL)hasUpdateBehavior;
-(id)updateBehaviorAsString:(int)arg1 ;
-(int)StringAsUpdateBehavior:(id)arg1 ;
-(void)clearCountryRegionWhitelists;
-(void)addCountryRegionWhitelist:(id)arg1 ;
-(unsigned long long)countryRegionWhitelistsCount;
-(id)countryRegionWhitelistAtIndex:(unsigned long long)arg1 ;
-(int)checksumType;
-(void)setChecksumType:(int)arg1 ;
-(void)setHasChecksumType:(BOOL)arg1 ;
-(BOOL)hasChecksumType;
-(id)checksumTypeAsString:(int)arg1 ;
-(int)StringAsChecksumType:(id)arg1 ;
-(void)setDataSet:(unsigned)arg1 ;
-(void)setHasDataSet:(BOOL)arg1 ;
-(BOOL)hasDataSet;
-(void)setBaseURL:(NSString *)arg1 ;
-(NSString *)multiTileURL;
-(void)setMultiTileURL:(NSString *)arg1 ;
-(NSMutableArray *)validVersions;
-(void)setValidVersions:(NSMutableArray *)arg1 ;
-(NSString *)localizationURL;
-(void)setLocalizationURL:(NSString *)arg1 ;
-(NSMutableArray *)supportedLanguages;
-(void)setSupportedLanguages:(NSMutableArray *)arg1 ;
-(BOOL)multiTileURLUsesStatusCodes;
-(NSMutableArray *)countryRegionWhitelists;
-(void)setCountryRegionWhitelists:(NSMutableArray *)arg1 ;
-(unsigned)dataSet;
@end

