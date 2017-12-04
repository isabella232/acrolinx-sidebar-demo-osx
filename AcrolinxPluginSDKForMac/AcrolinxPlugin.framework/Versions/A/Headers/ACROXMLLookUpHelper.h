//
//  XMLLookUpHelper.h
//  JWABPlugin
//
//  Created by Puneet Sanchiher on 17.02.16.
//  Copyright (c) 2016 Acrolinx GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ACROIndexStore.h"


@interface ACROXMLLookUpHelper : NSObject

@property (nonatomic, retain, readonly) NSMutableString *matchingStore;
@property (nonatomic, retain, readonly) ACROIndexStore *indexStore;

+ (instancetype)xmlLookUpHelperWithXML:(NSString *)XML;

- (instancetype)initWithXMLString:(NSString *)XMLString;

- (NSRange)rangeForMatches:(NSArray *)matches inPlainTextContent:(NSString *)plainText forBookMarkRangeInXML:(NSRange)bookmarkRangeInXML;
@end
