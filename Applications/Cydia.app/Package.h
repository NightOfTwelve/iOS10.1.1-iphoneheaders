/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Cydia/Cydia-Structs.h>
@class Database, NSString;

@interface Package : NSObject {

	unsigned era_ : 25;
	unsigned role_ : 3;
	unsigned essential_ : 1;
	unsigned obsolete_ : 1;
	unsigned ignored_ : 1;
	unsigned pooled_ : 1;
	CYPool* pool_;
	unsigned rank_;
	Database* database_;
	VerIterator* version_;
	PkgIterator* iterator_;
	VerFileIterator* file_;
	CYString* id_;
	CYString* name_;
	CYString* transform_;
	CYString* latest_;
	CYString* installed_;
	long upgraded_;
	const char* section_;
	NSString* section$_;
	MenesObjectHandle<Source, 0> source_;
	PackageValue* metadata_;
	ParsedPackage* parsed_;
	MenesObjectHandle<NSMutableArray, 0> tags_;

}
+(id)_attributeKeys;
+(id)packageWithIterator:(PkgIterator*)arg1 withZone:(NSZone*)arg2 inPool:(CYPool*)arg3 database:(id)arg4 ;
+(char)isKeyExcludedFromWebScript:(const char*)arg1 ;
+(char)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(id)getField:(id)arg1 ;
-(char)upgradableAndEssential:(char)arg1 ;
-(CYString*)cyname;
-(id)getRecord;
-(id)initWithVersion:(VerIterator*)arg1 withZone:(NSZone*)arg2 inPool:(CYPool*)arg3 database:(id)arg4 ;
-(id)simpleSection;
-(char)unfiltered;
-(PkgIterator*)iterator;
-(id)downgrades;
-(id)longSection;
-(id)shortSection;
-(id)maintainer;
-(id)latest;
-(char)uninstalled;
-(char)essential;
-(char)broken;
-(char)half;
-(char)halfConfigured;
-(char)halfInstalled;
-(id)homepage;
-(id)support;
-(long)upgraded;
-(unsigned)recent;
-(id)primaryPurpose;
-(id)purposes;
-(BOOL)isCommercial;
-(unsigned)compareBySection:(id)arg1 ;
-(id)tags;
-(char)matches:(id)arg1 ;
-(id)files;
-(unsigned long)size;
-(void)dealloc;
-(id)description;
-(id)state;
-(id)name;
-(id)section;
-(char)visible;
-(id)selection;
-(id)mode;
-(unsigned short)index;
-(id)source;
-(void)clear;
-(id)shortDescription;
-(id)icon;
-(void)remove;
-(void)setIndex:(unsigned long)arg1 ;
-(PackageValue*)metadata;
-(id)author;
-(id)attributeKeys;
-(char)hasMode;
-(unsigned)rank;
-(BOOL)subscribed;
-(id)relations;
-(BOOL)setSubscribed:(BOOL)arg1 ;
-(id)longDescription;
-(char)ignored;
-(void)parse;
-(id)depiction;
-(id)installed;
-(long)seen;
-(id)applications;
-(char)hasTag:(id)arg1 ;
-(void)install;
-(id)id;
-(id)uri;
-(id)warnings;
-(id)architecture;
-(id)md5sum;
@end

