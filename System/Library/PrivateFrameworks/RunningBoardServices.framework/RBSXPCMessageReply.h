/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class RBSXPCCoder, RBSXPCMessageContext;

@interface RBSXPCMessageReply : NSObject {

	RBSXPCCoder* _payload;
	RBSXPCMessageContext* _context;
	BOOL _sent;

}

@property (nonatomic,readonly) id<RBSXPCEncoding><RBSXPCDecoding> payload;              //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) RBSXPCMessageContext * context;                          //@synthesize context=_context - In the implementation block
-(id<RBSXPCEncoding><RBSXPCDecoding>)payload;
-(void)send;
-(void)encode:(/*^block*/id)arg1 ;
-(RBSXPCMessageContext *)context;
-(void)prepareForHandoff;
@end

