/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface MFMessageWriter : NSObject {

	Class _messageClassToInstantiate;
	unsigned _allows8BitMimeParts : 1;
	unsigned _allowsBinaryMimeParts : 1;
	unsigned _writeSizeDispositionParameter : 1;
	unsigned _allowsQuotedPrintable : 1;
	BOOL _shouldWriteAttachmentPlaceholders;
	id _delegate;
	NSDictionary* _compositionSpecification;

}

@property (assign,nonatomic) id delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * compositionSpecification;              //@synthesize compositionSpecification=_compositionSpecification - In the implementation block
@property (assign,nonatomic) BOOL shouldWriteAttachmentPlaceholders;                 //@synthesize shouldWriteAttachmentPlaceholders=_shouldWriteAttachmentPlaceholders - In the implementation block
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(id)initWithCompositionSpecification:(id)arg1 ;
-(void)setAllowsQuotedPrintable:(BOOL)arg1 ;
-(id)createMessageWithHtmlString:(id)arg1 plainTextAlternative:(id)arg2 otherHtmlStringsAndAttachments:(id)arg3 charsets:(id)arg4 headers:(id)arg5 ;
-(void)appendDataForMimePart:(id)arg1 toData:(id)arg2 withPartData:(id)arg3 ;
-(id)createMessageWithString:(id)arg1 headers:(id)arg2 ;
-(id)createMessageWithPlainTextDocumentsAndAttachments:(id)arg1 headers:(id)arg2 ;
-(id)createMessageWithHtmlString:(id)arg1 plainTextAlternative:(id)arg2 otherHtmlStringsAndAttachments:(id)arg3 headers:(id)arg4 ;
-(id)createMessageWithHtmlString:(id)arg1 attachments:(id)arg2 headers:(id)arg3 ;
-(BOOL)allows8BitMimeParts;
-(void)setAllows8BitMimeParts:(BOOL)arg1 ;
-(BOOL)allowsBinaryMimeParts;
-(void)setAllowsBinaryMimeParts:(BOOL)arg1 ;
-(BOOL)allowsQuotedPrintable;
-(void)setWriteSizeDispositionParameter:(BOOL)arg1 ;
-(void)setMessageClassToInstantiate:(Class)arg1 ;
-(NSDictionary *)compositionSpecification;
-(BOOL)shouldWriteAttachmentPlaceholders;
-(void)setShouldWriteAttachmentPlaceholders:(BOOL)arg1 ;
@end

