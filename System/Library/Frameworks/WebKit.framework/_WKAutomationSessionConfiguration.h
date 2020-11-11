/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _WKAutomationSessionConfiguration : NSObject <NSCopying> {

	BOOL _allowsInsecureMediaCapture;
	BOOL _suppressesICECandidateFiltering;

}

@property (assign,nonatomic) BOOL allowsInsecureMediaCapture;                   //@synthesize allowsInsecureMediaCapture=_allowsInsecureMediaCapture - In the implementation block
@property (assign,nonatomic) BOOL suppressesICECandidateFiltering;              //@synthesize suppressesICECandidateFiltering=_suppressesICECandidateFiltering - In the implementation block
-(id)init;
-(BOOL)allowsInsecureMediaCapture;
-(void)setAllowsInsecureMediaCapture:(BOOL)arg1 ;
-(BOOL)suppressesICECandidateFiltering;
-(void)setSuppressesICECandidateFiltering:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
