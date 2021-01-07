
// Generated from MiniDecaf.g4 by ANTLR 4.8


#include "MiniDecafVisitor.h"

#include "MiniDecafParser.h"


using namespace antlrcpp;
using namespace antlr4;

MiniDecafParser::MiniDecafParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

MiniDecafParser::~MiniDecafParser() {
  delete _interpreter;
}

std::string MiniDecafParser::getGrammarFileName() const {
  return "MiniDecaf.g4";
}

const std::vector<std::string>& MiniDecafParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& MiniDecafParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

MiniDecafParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MiniDecafParser::FuncContext* MiniDecafParser::ProgContext::func() {
  return getRuleContext<MiniDecafParser::FuncContext>(0);
}

tree::TerminalNode* MiniDecafParser::ProgContext::EOF() {
  return getToken(MiniDecafParser::EOF, 0);
}


size_t MiniDecafParser::ProgContext::getRuleIndex() const {
  return MiniDecafParser::RuleProg;
}


antlrcpp::Any MiniDecafParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

MiniDecafParser::ProgContext* MiniDecafParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, MiniDecafParser::RuleProg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(14);
    func();
    setState(15);
    match(MiniDecafParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncContext ------------------------------------------------------------------

MiniDecafParser::FuncContext::FuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MiniDecafParser::TypeContext* MiniDecafParser::FuncContext::type() {
  return getRuleContext<MiniDecafParser::TypeContext>(0);
}

tree::TerminalNode* MiniDecafParser::FuncContext::Identifier() {
  return getToken(MiniDecafParser::Identifier, 0);
}

tree::TerminalNode* MiniDecafParser::FuncContext::Lparen() {
  return getToken(MiniDecafParser::Lparen, 0);
}

tree::TerminalNode* MiniDecafParser::FuncContext::Rparen() {
  return getToken(MiniDecafParser::Rparen, 0);
}

tree::TerminalNode* MiniDecafParser::FuncContext::Lbrace() {
  return getToken(MiniDecafParser::Lbrace, 0);
}

tree::TerminalNode* MiniDecafParser::FuncContext::Rbrace() {
  return getToken(MiniDecafParser::Rbrace, 0);
}

std::vector<MiniDecafParser::BlockItemContext *> MiniDecafParser::FuncContext::blockItem() {
  return getRuleContexts<MiniDecafParser::BlockItemContext>();
}

MiniDecafParser::BlockItemContext* MiniDecafParser::FuncContext::blockItem(size_t i) {
  return getRuleContext<MiniDecafParser::BlockItemContext>(i);
}


size_t MiniDecafParser::FuncContext::getRuleIndex() const {
  return MiniDecafParser::RuleFunc;
}


antlrcpp::Any MiniDecafParser::FuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitFunc(this);
  else
    return visitor->visitChildren(this);
}

MiniDecafParser::FuncContext* MiniDecafParser::func() {
  FuncContext *_localctx = _tracker.createInstance<FuncContext>(_ctx, getState());
  enterRule(_localctx, 2, MiniDecafParser::RuleFunc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(17);
    type();
    setState(18);
    match(MiniDecafParser::Identifier);
    setState(19);
    match(MiniDecafParser::Lparen);
    setState(20);
    match(MiniDecafParser::Rparen);
    setState(21);
    match(MiniDecafParser::Lbrace);
    setState(25);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MiniDecafParser::Int)
      | (1ULL << MiniDecafParser::Return)
      | (1ULL << MiniDecafParser::If)
      | (1ULL << MiniDecafParser::For)
      | (1ULL << MiniDecafParser::While)
      | (1ULL << MiniDecafParser::Do)
      | (1ULL << MiniDecafParser::Break)
      | (1ULL << MiniDecafParser::Continue)
      | (1ULL << MiniDecafParser::Lparen)
      | (1ULL << MiniDecafParser::Lbrace)
      | (1ULL << MiniDecafParser::Semicolon)
      | (1ULL << MiniDecafParser::Minus)
      | (1ULL << MiniDecafParser::Exclamation)
      | (1ULL << MiniDecafParser::Tilde)
      | (1ULL << MiniDecafParser::Integer)
      | (1ULL << MiniDecafParser::Identifier))) != 0)) {
      setState(22);
      blockItem();
      setState(27);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(28);
    match(MiniDecafParser::Rbrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockItemContext ------------------------------------------------------------------

MiniDecafParser::BlockItemContext::BlockItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MiniDecafParser::StmtContext* MiniDecafParser::BlockItemContext::stmt() {
  return getRuleContext<MiniDecafParser::StmtContext>(0);
}

MiniDecafParser::DeclarationContext* MiniDecafParser::BlockItemContext::declaration() {
  return getRuleContext<MiniDecafParser::DeclarationContext>(0);
}

tree::TerminalNode* MiniDecafParser::BlockItemContext::Semicolon() {
  return getToken(MiniDecafParser::Semicolon, 0);
}


size_t MiniDecafParser::BlockItemContext::getRuleIndex() const {
  return MiniDecafParser::RuleBlockItem;
}


antlrcpp::Any MiniDecafParser::BlockItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitBlockItem(this);
  else
    return visitor->visitChildren(this);
}

MiniDecafParser::BlockItemContext* MiniDecafParser::blockItem() {
  BlockItemContext *_localctx = _tracker.createInstance<BlockItemContext>(_ctx, getState());
  enterRule(_localctx, 4, MiniDecafParser::RuleBlockItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(34);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MiniDecafParser::Return:
      case MiniDecafParser::If:
      case MiniDecafParser::For:
      case MiniDecafParser::While:
      case MiniDecafParser::Do:
      case MiniDecafParser::Break:
      case MiniDecafParser::Continue:
      case MiniDecafParser::Lparen:
      case MiniDecafParser::Lbrace:
      case MiniDecafParser::Semicolon:
      case MiniDecafParser::Minus:
      case MiniDecafParser::Exclamation:
      case MiniDecafParser::Tilde:
      case MiniDecafParser::Integer:
      case MiniDecafParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(30);
        stmt();
        break;
      }

      case MiniDecafParser::Int: {
        enterOuterAlt(_localctx, 2);
        setState(31);
        declaration();
        setState(32);
        match(MiniDecafParser::Semicolon);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

MiniDecafParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MiniDecafParser::DeclarationContext::getRuleIndex() const {
  return MiniDecafParser::RuleDeclaration;
}

void MiniDecafParser::DeclarationContext::copyFrom(DeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VarDefineContext ------------------------------------------------------------------

MiniDecafParser::TypeContext* MiniDecafParser::VarDefineContext::type() {
  return getRuleContext<MiniDecafParser::TypeContext>(0);
}

tree::TerminalNode* MiniDecafParser::VarDefineContext::Identifier() {
  return getToken(MiniDecafParser::Identifier, 0);
}

MiniDecafParser::ExprContext* MiniDecafParser::VarDefineContext::expr() {
  return getRuleContext<MiniDecafParser::ExprContext>(0);
}

MiniDecafParser::VarDefineContext::VarDefineContext(DeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::VarDefineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitVarDefine(this);
  else
    return visitor->visitChildren(this);
}
MiniDecafParser::DeclarationContext* MiniDecafParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, MiniDecafParser::RuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<MiniDecafParser::VarDefineContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(36);
    type();
    setState(37);
    match(MiniDecafParser::Identifier);
    setState(40);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MiniDecafParser::T__0) {
      setState(38);
      match(MiniDecafParser::T__0);
      setState(39);
      expr(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

MiniDecafParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MiniDecafParser::StmtContext::getRuleIndex() const {
  return MiniDecafParser::RuleStmt;
}

void MiniDecafParser::StmtContext::copyFrom(StmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- RetStmtContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::RetStmtContext::Return() {
  return getToken(MiniDecafParser::Return, 0);
}

MiniDecafParser::ExprContext* MiniDecafParser::RetStmtContext::expr() {
  return getRuleContext<MiniDecafParser::ExprContext>(0);
}

tree::TerminalNode* MiniDecafParser::RetStmtContext::Semicolon() {
  return getToken(MiniDecafParser::Semicolon, 0);
}

MiniDecafParser::RetStmtContext::RetStmtContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::RetStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitRetStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprStmtContext ------------------------------------------------------------------

MiniDecafParser::ExprContext* MiniDecafParser::ExprStmtContext::expr() {
  return getRuleContext<MiniDecafParser::ExprContext>(0);
}

tree::TerminalNode* MiniDecafParser::ExprStmtContext::Semicolon() {
  return getToken(MiniDecafParser::Semicolon, 0);
}

MiniDecafParser::ExprStmtContext::ExprStmtContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::ExprStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitExprStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WhileLoopContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::WhileLoopContext::While() {
  return getToken(MiniDecafParser::While, 0);
}

tree::TerminalNode* MiniDecafParser::WhileLoopContext::Lparen() {
  return getToken(MiniDecafParser::Lparen, 0);
}

MiniDecafParser::ExprContext* MiniDecafParser::WhileLoopContext::expr() {
  return getRuleContext<MiniDecafParser::ExprContext>(0);
}

tree::TerminalNode* MiniDecafParser::WhileLoopContext::Rparen() {
  return getToken(MiniDecafParser::Rparen, 0);
}

MiniDecafParser::StmtContext* MiniDecafParser::WhileLoopContext::stmt() {
  return getRuleContext<MiniDecafParser::StmtContext>(0);
}

MiniDecafParser::WhileLoopContext::WhileLoopContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::WhileLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitWhileLoop(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DoWhileContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::DoWhileContext::Do() {
  return getToken(MiniDecafParser::Do, 0);
}

MiniDecafParser::StmtContext* MiniDecafParser::DoWhileContext::stmt() {
  return getRuleContext<MiniDecafParser::StmtContext>(0);
}

tree::TerminalNode* MiniDecafParser::DoWhileContext::While() {
  return getToken(MiniDecafParser::While, 0);
}

tree::TerminalNode* MiniDecafParser::DoWhileContext::Lparen() {
  return getToken(MiniDecafParser::Lparen, 0);
}

MiniDecafParser::ExprContext* MiniDecafParser::DoWhileContext::expr() {
  return getRuleContext<MiniDecafParser::ExprContext>(0);
}

tree::TerminalNode* MiniDecafParser::DoWhileContext::Rparen() {
  return getToken(MiniDecafParser::Rparen, 0);
}

tree::TerminalNode* MiniDecafParser::DoWhileContext::Semicolon() {
  return getToken(MiniDecafParser::Semicolon, 0);
}

MiniDecafParser::DoWhileContext::DoWhileContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::DoWhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitDoWhile(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BreakContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::BreakContext::Break() {
  return getToken(MiniDecafParser::Break, 0);
}

tree::TerminalNode* MiniDecafParser::BreakContext::Semicolon() {
  return getToken(MiniDecafParser::Semicolon, 0);
}

MiniDecafParser::BreakContext::BreakContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::BreakContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitBreak(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ContinueContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::ContinueContext::Continue() {
  return getToken(MiniDecafParser::Continue, 0);
}

tree::TerminalNode* MiniDecafParser::ContinueContext::Semicolon() {
  return getToken(MiniDecafParser::Semicolon, 0);
}

MiniDecafParser::ContinueContext::ContinueContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::ContinueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitContinue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BlockContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::BlockContext::Lbrace() {
  return getToken(MiniDecafParser::Lbrace, 0);
}

tree::TerminalNode* MiniDecafParser::BlockContext::Rbrace() {
  return getToken(MiniDecafParser::Rbrace, 0);
}

std::vector<MiniDecafParser::BlockItemContext *> MiniDecafParser::BlockContext::blockItem() {
  return getRuleContexts<MiniDecafParser::BlockItemContext>();
}

MiniDecafParser::BlockItemContext* MiniDecafParser::BlockContext::blockItem(size_t i) {
  return getRuleContext<MiniDecafParser::BlockItemContext>(i);
}

MiniDecafParser::BlockContext::BlockContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfElseContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::IfElseContext::If() {
  return getToken(MiniDecafParser::If, 0);
}

tree::TerminalNode* MiniDecafParser::IfElseContext::Lparen() {
  return getToken(MiniDecafParser::Lparen, 0);
}

MiniDecafParser::ExprContext* MiniDecafParser::IfElseContext::expr() {
  return getRuleContext<MiniDecafParser::ExprContext>(0);
}

tree::TerminalNode* MiniDecafParser::IfElseContext::Rparen() {
  return getToken(MiniDecafParser::Rparen, 0);
}

std::vector<MiniDecafParser::StmtContext *> MiniDecafParser::IfElseContext::stmt() {
  return getRuleContexts<MiniDecafParser::StmtContext>();
}

MiniDecafParser::StmtContext* MiniDecafParser::IfElseContext::stmt(size_t i) {
  return getRuleContext<MiniDecafParser::StmtContext>(i);
}

tree::TerminalNode* MiniDecafParser::IfElseContext::Else() {
  return getToken(MiniDecafParser::Else, 0);
}

MiniDecafParser::IfElseContext::IfElseContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::IfElseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitIfElse(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ForLoopContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::ForLoopContext::For() {
  return getToken(MiniDecafParser::For, 0);
}

tree::TerminalNode* MiniDecafParser::ForLoopContext::Lparen() {
  return getToken(MiniDecafParser::Lparen, 0);
}

std::vector<tree::TerminalNode *> MiniDecafParser::ForLoopContext::Semicolon() {
  return getTokens(MiniDecafParser::Semicolon);
}

tree::TerminalNode* MiniDecafParser::ForLoopContext::Semicolon(size_t i) {
  return getToken(MiniDecafParser::Semicolon, i);
}

tree::TerminalNode* MiniDecafParser::ForLoopContext::Rparen() {
  return getToken(MiniDecafParser::Rparen, 0);
}

MiniDecafParser::StmtContext* MiniDecafParser::ForLoopContext::stmt() {
  return getRuleContext<MiniDecafParser::StmtContext>(0);
}

MiniDecafParser::DeclarationContext* MiniDecafParser::ForLoopContext::declaration() {
  return getRuleContext<MiniDecafParser::DeclarationContext>(0);
}

std::vector<MiniDecafParser::ExprContext *> MiniDecafParser::ForLoopContext::expr() {
  return getRuleContexts<MiniDecafParser::ExprContext>();
}

MiniDecafParser::ExprContext* MiniDecafParser::ForLoopContext::expr(size_t i) {
  return getRuleContext<MiniDecafParser::ExprContext>(i);
}

MiniDecafParser::ForLoopContext::ForLoopContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::ForLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitForLoop(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SemicolonContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::SemicolonContext::Semicolon() {
  return getToken(MiniDecafParser::Semicolon, 0);
}

MiniDecafParser::SemicolonContext::SemicolonContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::SemicolonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitSemicolon(this);
  else
    return visitor->visitChildren(this);
}
MiniDecafParser::StmtContext* MiniDecafParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 8, MiniDecafParser::RuleStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(101);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MiniDecafParser::Return: {
        _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MiniDecafParser::RetStmtContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(42);
        match(MiniDecafParser::Return);
        setState(43);
        expr(0);
        setState(44);
        match(MiniDecafParser::Semicolon);
        break;
      }

      case MiniDecafParser::Lparen:
      case MiniDecafParser::Minus:
      case MiniDecafParser::Exclamation:
      case MiniDecafParser::Tilde:
      case MiniDecafParser::Integer:
      case MiniDecafParser::Identifier: {
        _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MiniDecafParser::ExprStmtContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(46);
        expr(0);
        setState(47);
        match(MiniDecafParser::Semicolon);
        break;
      }

      case MiniDecafParser::If: {
        _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MiniDecafParser::IfElseContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(49);
        match(MiniDecafParser::If);
        setState(50);
        match(MiniDecafParser::Lparen);
        setState(51);
        expr(0);
        setState(52);
        match(MiniDecafParser::Rparen);
        setState(53);
        stmt();
        setState(56);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          setState(54);
          match(MiniDecafParser::Else);
          setState(55);
          stmt();
          break;
        }

        }
        break;
      }

      case MiniDecafParser::Lbrace: {
        _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MiniDecafParser::BlockContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(58);
        match(MiniDecafParser::Lbrace);
        setState(62);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << MiniDecafParser::Int)
          | (1ULL << MiniDecafParser::Return)
          | (1ULL << MiniDecafParser::If)
          | (1ULL << MiniDecafParser::For)
          | (1ULL << MiniDecafParser::While)
          | (1ULL << MiniDecafParser::Do)
          | (1ULL << MiniDecafParser::Break)
          | (1ULL << MiniDecafParser::Continue)
          | (1ULL << MiniDecafParser::Lparen)
          | (1ULL << MiniDecafParser::Lbrace)
          | (1ULL << MiniDecafParser::Semicolon)
          | (1ULL << MiniDecafParser::Minus)
          | (1ULL << MiniDecafParser::Exclamation)
          | (1ULL << MiniDecafParser::Tilde)
          | (1ULL << MiniDecafParser::Integer)
          | (1ULL << MiniDecafParser::Identifier))) != 0)) {
          setState(59);
          blockItem();
          setState(64);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(65);
        match(MiniDecafParser::Rbrace);
        break;
      }

      case MiniDecafParser::For: {
        _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MiniDecafParser::ForLoopContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(66);
        match(MiniDecafParser::For);
        setState(67);
        match(MiniDecafParser::Lparen);
        setState(70);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case MiniDecafParser::Int: {
            setState(68);
            declaration();
            break;
          }

          case MiniDecafParser::Lparen:
          case MiniDecafParser::Minus:
          case MiniDecafParser::Exclamation:
          case MiniDecafParser::Tilde:
          case MiniDecafParser::Integer:
          case MiniDecafParser::Identifier: {
            setState(69);
            expr(0);
            break;
          }

          case MiniDecafParser::Semicolon: {
            break;
          }

        default:
          break;
        }
        setState(72);
        match(MiniDecafParser::Semicolon);
        setState(74);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << MiniDecafParser::Lparen)
          | (1ULL << MiniDecafParser::Minus)
          | (1ULL << MiniDecafParser::Exclamation)
          | (1ULL << MiniDecafParser::Tilde)
          | (1ULL << MiniDecafParser::Integer)
          | (1ULL << MiniDecafParser::Identifier))) != 0)) {
          setState(73);
          expr(0);
        }
        setState(76);
        match(MiniDecafParser::Semicolon);
        setState(78);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << MiniDecafParser::Lparen)
          | (1ULL << MiniDecafParser::Minus)
          | (1ULL << MiniDecafParser::Exclamation)
          | (1ULL << MiniDecafParser::Tilde)
          | (1ULL << MiniDecafParser::Integer)
          | (1ULL << MiniDecafParser::Identifier))) != 0)) {
          setState(77);
          expr(0);
        }
        setState(80);
        match(MiniDecafParser::Rparen);
        setState(81);
        stmt();
        break;
      }

      case MiniDecafParser::While: {
        _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MiniDecafParser::WhileLoopContext>(_localctx));
        enterOuterAlt(_localctx, 6);
        setState(82);
        match(MiniDecafParser::While);
        setState(83);
        match(MiniDecafParser::Lparen);
        setState(84);
        expr(0);
        setState(85);
        match(MiniDecafParser::Rparen);
        setState(86);
        stmt();
        break;
      }

      case MiniDecafParser::Do: {
        _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MiniDecafParser::DoWhileContext>(_localctx));
        enterOuterAlt(_localctx, 7);
        setState(88);
        match(MiniDecafParser::Do);
        setState(89);
        stmt();
        setState(90);
        match(MiniDecafParser::While);
        setState(91);
        match(MiniDecafParser::Lparen);
        setState(92);
        expr(0);
        setState(93);
        match(MiniDecafParser::Rparen);
        setState(94);
        match(MiniDecafParser::Semicolon);
        break;
      }

      case MiniDecafParser::Break: {
        _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MiniDecafParser::BreakContext>(_localctx));
        enterOuterAlt(_localctx, 8);
        setState(96);
        match(MiniDecafParser::Break);
        setState(97);
        match(MiniDecafParser::Semicolon);
        break;
      }

      case MiniDecafParser::Continue: {
        _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MiniDecafParser::ContinueContext>(_localctx));
        enterOuterAlt(_localctx, 9);
        setState(98);
        match(MiniDecafParser::Continue);
        setState(99);
        match(MiniDecafParser::Semicolon);
        break;
      }

      case MiniDecafParser::Semicolon: {
        _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MiniDecafParser::SemicolonContext>(_localctx));
        enterOuterAlt(_localctx, 10);
        setState(100);
        match(MiniDecafParser::Semicolon);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

MiniDecafParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MiniDecafParser::ExprContext::getRuleIndex() const {
  return MiniDecafParser::RuleExpr;
}

void MiniDecafParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- EqualContext ------------------------------------------------------------------

std::vector<MiniDecafParser::ExprContext *> MiniDecafParser::EqualContext::expr() {
  return getRuleContexts<MiniDecafParser::ExprContext>();
}

MiniDecafParser::ExprContext* MiniDecafParser::EqualContext::expr(size_t i) {
  return getRuleContext<MiniDecafParser::ExprContext>(i);
}

tree::TerminalNode* MiniDecafParser::EqualContext::EQ() {
  return getToken(MiniDecafParser::EQ, 0);
}

tree::TerminalNode* MiniDecafParser::EqualContext::NEQ() {
  return getToken(MiniDecafParser::NEQ, 0);
}

MiniDecafParser::EqualContext::EqualContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::EqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdentifierContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::IdentifierContext::Identifier() {
  return getToken(MiniDecafParser::Identifier, 0);
}

MiniDecafParser::IdentifierContext::IdentifierContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::ParenContext::Lparen() {
  return getToken(MiniDecafParser::Lparen, 0);
}

MiniDecafParser::ExprContext* MiniDecafParser::ParenContext::expr() {
  return getRuleContext<MiniDecafParser::ExprContext>(0);
}

tree::TerminalNode* MiniDecafParser::ParenContext::Rparen() {
  return getToken(MiniDecafParser::Rparen, 0);
}

MiniDecafParser::ParenContext::ParenContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::ParenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitParen(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CompareContext ------------------------------------------------------------------

std::vector<MiniDecafParser::ExprContext *> MiniDecafParser::CompareContext::expr() {
  return getRuleContexts<MiniDecafParser::ExprContext>();
}

MiniDecafParser::ExprContext* MiniDecafParser::CompareContext::expr(size_t i) {
  return getRuleContext<MiniDecafParser::ExprContext>(i);
}

tree::TerminalNode* MiniDecafParser::CompareContext::LT() {
  return getToken(MiniDecafParser::LT, 0);
}

tree::TerminalNode* MiniDecafParser::CompareContext::LE() {
  return getToken(MiniDecafParser::LE, 0);
}

tree::TerminalNode* MiniDecafParser::CompareContext::GT() {
  return getToken(MiniDecafParser::GT, 0);
}

tree::TerminalNode* MiniDecafParser::CompareContext::GE() {
  return getToken(MiniDecafParser::GE, 0);
}

MiniDecafParser::CompareContext::CompareContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::CompareContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitCompare(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CondExprContext ------------------------------------------------------------------

std::vector<MiniDecafParser::ExprContext *> MiniDecafParser::CondExprContext::expr() {
  return getRuleContexts<MiniDecafParser::ExprContext>();
}

MiniDecafParser::ExprContext* MiniDecafParser::CondExprContext::expr(size_t i) {
  return getRuleContext<MiniDecafParser::ExprContext>(i);
}

tree::TerminalNode* MiniDecafParser::CondExprContext::Question() {
  return getToken(MiniDecafParser::Question, 0);
}

tree::TerminalNode* MiniDecafParser::CondExprContext::Colon() {
  return getToken(MiniDecafParser::Colon, 0);
}

MiniDecafParser::CondExprContext::CondExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::CondExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitCondExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LandContext ------------------------------------------------------------------

std::vector<MiniDecafParser::ExprContext *> MiniDecafParser::LandContext::expr() {
  return getRuleContexts<MiniDecafParser::ExprContext>();
}

MiniDecafParser::ExprContext* MiniDecafParser::LandContext::expr(size_t i) {
  return getRuleContext<MiniDecafParser::ExprContext>(i);
}

tree::TerminalNode* MiniDecafParser::LandContext::LAND() {
  return getToken(MiniDecafParser::LAND, 0);
}

MiniDecafParser::LandContext::LandContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::LandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitLand(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubContext ------------------------------------------------------------------

std::vector<MiniDecafParser::ExprContext *> MiniDecafParser::AddSubContext::expr() {
  return getRuleContexts<MiniDecafParser::ExprContext>();
}

MiniDecafParser::ExprContext* MiniDecafParser::AddSubContext::expr(size_t i) {
  return getRuleContext<MiniDecafParser::ExprContext>(i);
}

tree::TerminalNode* MiniDecafParser::AddSubContext::Addition() {
  return getToken(MiniDecafParser::Addition, 0);
}

tree::TerminalNode* MiniDecafParser::AddSubContext::Minus() {
  return getToken(MiniDecafParser::Minus, 0);
}

MiniDecafParser::AddSubContext::AddSubContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::AddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitAddSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryContext ------------------------------------------------------------------

MiniDecafParser::ExprContext* MiniDecafParser::UnaryContext::expr() {
  return getRuleContext<MiniDecafParser::ExprContext>(0);
}

tree::TerminalNode* MiniDecafParser::UnaryContext::Minus() {
  return getToken(MiniDecafParser::Minus, 0);
}

tree::TerminalNode* MiniDecafParser::UnaryContext::Exclamation() {
  return getToken(MiniDecafParser::Exclamation, 0);
}

tree::TerminalNode* MiniDecafParser::UnaryContext::Tilde() {
  return getToken(MiniDecafParser::Tilde, 0);
}

MiniDecafParser::UnaryContext::UnaryContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::UnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitUnary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntegerContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::IntegerContext::Integer() {
  return getToken(MiniDecafParser::Integer, 0);
}

MiniDecafParser::IntegerContext::IntegerContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::IntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitInteger(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivContext ------------------------------------------------------------------

std::vector<MiniDecafParser::ExprContext *> MiniDecafParser::MulDivContext::expr() {
  return getRuleContexts<MiniDecafParser::ExprContext>();
}

MiniDecafParser::ExprContext* MiniDecafParser::MulDivContext::expr(size_t i) {
  return getRuleContext<MiniDecafParser::ExprContext>(i);
}

tree::TerminalNode* MiniDecafParser::MulDivContext::Multiplication() {
  return getToken(MiniDecafParser::Multiplication, 0);
}

tree::TerminalNode* MiniDecafParser::MulDivContext::Division() {
  return getToken(MiniDecafParser::Division, 0);
}

tree::TerminalNode* MiniDecafParser::MulDivContext::Modulo() {
  return getToken(MiniDecafParser::Modulo, 0);
}

MiniDecafParser::MulDivContext::MulDivContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::MulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LorContext ------------------------------------------------------------------

std::vector<MiniDecafParser::ExprContext *> MiniDecafParser::LorContext::expr() {
  return getRuleContexts<MiniDecafParser::ExprContext>();
}

MiniDecafParser::ExprContext* MiniDecafParser::LorContext::expr(size_t i) {
  return getRuleContext<MiniDecafParser::ExprContext>(i);
}

tree::TerminalNode* MiniDecafParser::LorContext::LOR() {
  return getToken(MiniDecafParser::LOR, 0);
}

MiniDecafParser::LorContext::LorContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::LorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitLor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::AssignContext::Identifier() {
  return getToken(MiniDecafParser::Identifier, 0);
}

MiniDecafParser::ExprContext* MiniDecafParser::AssignContext::expr() {
  return getRuleContext<MiniDecafParser::ExprContext>(0);
}

MiniDecafParser::AssignContext::AssignContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}

MiniDecafParser::ExprContext* MiniDecafParser::expr() {
   return expr(0);
}

MiniDecafParser::ExprContext* MiniDecafParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MiniDecafParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  MiniDecafParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, MiniDecafParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(115);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<UnaryContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(104);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MiniDecafParser::Minus)
        | (1ULL << MiniDecafParser::Exclamation)
        | (1ULL << MiniDecafParser::Tilde))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(105);
      expr(12);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ParenContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(106);
      match(MiniDecafParser::Lparen);
      setState(107);
      expr(0);
      setState(108);
      match(MiniDecafParser::Rparen);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<AssignContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(110);
      match(MiniDecafParser::Identifier);
      setState(111);
      match(MiniDecafParser::T__0);
      setState(112);
      expr(3);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<IdentifierContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(113);
      match(MiniDecafParser::Identifier);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<IntegerContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(114);
      match(MiniDecafParser::Integer);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(143);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(141);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(117);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(118);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << MiniDecafParser::Multiplication)
            | (1ULL << MiniDecafParser::Division)
            | (1ULL << MiniDecafParser::Modulo))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(119);
          expr(12);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(120);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(121);
          _la = _input->LA(1);
          if (!(_la == MiniDecafParser::Minus

          || _la == MiniDecafParser::Addition)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(122);
          expr(11);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<CompareContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(123);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(124);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << MiniDecafParser::LT)
            | (1ULL << MiniDecafParser::LE)
            | (1ULL << MiniDecafParser::GT)
            | (1ULL << MiniDecafParser::GE))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(125);
          expr(10);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<EqualContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(126);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(127);
          _la = _input->LA(1);
          if (!(_la == MiniDecafParser::EQ

          || _la == MiniDecafParser::NEQ)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(128);
          expr(9);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<LandContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(129);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");

          setState(130);
          match(MiniDecafParser::LAND);
          setState(131);
          expr(8);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<LorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(132);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");

          setState(133);
          match(MiniDecafParser::LOR);
          setState(134);
          expr(7);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<CondExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(135);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(136);
          match(MiniDecafParser::Question);
          setState(137);
          expr(0);
          setState(138);
          match(MiniDecafParser::Colon);
          setState(139);
          expr(6);
          break;
        }

        } 
      }
      setState(145);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

MiniDecafParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniDecafParser::TypeContext::Int() {
  return getToken(MiniDecafParser::Int, 0);
}


size_t MiniDecafParser::TypeContext::getRuleIndex() const {
  return MiniDecafParser::RuleType;
}


antlrcpp::Any MiniDecafParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

MiniDecafParser::TypeContext* MiniDecafParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 12, MiniDecafParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    match(MiniDecafParser::Int);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool MiniDecafParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 5: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MiniDecafParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 11);
    case 1: return precpred(_ctx, 10);
    case 2: return precpred(_ctx, 9);
    case 3: return precpred(_ctx, 8);
    case 4: return precpred(_ctx, 7);
    case 5: return precpred(_ctx, 6);
    case 6: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> MiniDecafParser::_decisionToDFA;
atn::PredictionContextCache MiniDecafParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN MiniDecafParser::_atn;
std::vector<uint16_t> MiniDecafParser::_serializedATN;

std::vector<std::string> MiniDecafParser::_ruleNames = {
  "prog", "func", "blockItem", "declaration", "stmt", "expr", "type"
};

std::vector<std::string> MiniDecafParser::_literalNames = {
  "", "'='", "'int'", "'return'", "'if'", "'else'", "'for'", "'while'", 
  "'do'", "'break'", "'continue'", "'('", "')'", "'['", "']'", "'{'", "'}'", 
  "','", "';'", "'?'", "':'", "'-'", "'!'", "'~'", "'+'", "'*'", "'/'", 
  "'%'", "'&&'", "'||'", "'=='", "'!='", "'<'", "'<='", "'>'", "'>='"
};

std::vector<std::string> MiniDecafParser::_symbolicNames = {
  "", "", "Int", "Return", "If", "Else", "For", "While", "Do", "Break", 
  "Continue", "Lparen", "Rparen", "Lbrkt", "Rbrkt", "Lbrace", "Rbrace", 
  "Comma", "Semicolon", "Question", "Colon", "Minus", "Exclamation", "Tilde", 
  "Addition", "Multiplication", "Division", "Modulo", "LAND", "LOR", "EQ", 
  "NEQ", "LT", "LE", "GT", "GE", "Integer", "Identifier", "WS"
};

dfa::Vocabulary MiniDecafParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> MiniDecafParser::_tokenNames;

MiniDecafParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x28, 0x97, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x1a, 0xa, 0x3, 0xc, 0x3, 
    0xe, 0x3, 0x1d, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x5, 0x4, 0x25, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x5, 0x5, 0x2b, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x3b, 0xa, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x7, 0x6, 0x3f, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x42, 0xb, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x49, 0xa, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x4d, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x5, 0x6, 0x51, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x68, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x76, 0xa, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x7, 0x7, 0x90, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x93, 0xb, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x2, 0x3, 0xc, 0x9, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x2, 0x7, 0x3, 0x2, 0x17, 0x19, 0x3, 0x2, 0x1b, 
    0x1d, 0x4, 0x2, 0x17, 0x17, 0x1a, 0x1a, 0x3, 0x2, 0x22, 0x25, 0x3, 0x2, 
    0x20, 0x21, 0x2, 0xac, 0x2, 0x10, 0x3, 0x2, 0x2, 0x2, 0x4, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x24, 0x3, 0x2, 0x2, 0x2, 0x8, 0x26, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x67, 0x3, 0x2, 0x2, 0x2, 0xc, 0x75, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x94, 0x3, 0x2, 0x2, 0x2, 0x10, 0x11, 0x5, 0x4, 0x3, 0x2, 0x11, 0x12, 
    0x7, 0x2, 0x2, 0x3, 0x12, 0x3, 0x3, 0x2, 0x2, 0x2, 0x13, 0x14, 0x5, 
    0xe, 0x8, 0x2, 0x14, 0x15, 0x7, 0x27, 0x2, 0x2, 0x15, 0x16, 0x7, 0xd, 
    0x2, 0x2, 0x16, 0x17, 0x7, 0xe, 0x2, 0x2, 0x17, 0x1b, 0x7, 0x11, 0x2, 
    0x2, 0x18, 0x1a, 0x5, 0x6, 0x4, 0x2, 0x19, 0x18, 0x3, 0x2, 0x2, 0x2, 
    0x1a, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1b, 
    0x1c, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1b, 
    0x3, 0x2, 0x2, 0x2, 0x1e, 0x1f, 0x7, 0x12, 0x2, 0x2, 0x1f, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x20, 0x25, 0x5, 0xa, 0x6, 0x2, 0x21, 0x22, 0x5, 0x8, 
    0x5, 0x2, 0x22, 0x23, 0x7, 0x14, 0x2, 0x2, 0x23, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0x20, 0x3, 0x2, 0x2, 0x2, 0x24, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0x25, 0x7, 0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x5, 0xe, 0x8, 0x2, 0x27, 
    0x2a, 0x7, 0x27, 0x2, 0x2, 0x28, 0x29, 0x7, 0x3, 0x2, 0x2, 0x29, 0x2b, 
    0x5, 0xc, 0x7, 0x2, 0x2a, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x3, 
    0x2, 0x2, 0x2, 0x2b, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x7, 0x5, 
    0x2, 0x2, 0x2d, 0x2e, 0x5, 0xc, 0x7, 0x2, 0x2e, 0x2f, 0x7, 0x14, 0x2, 
    0x2, 0x2f, 0x68, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x5, 0xc, 0x7, 0x2, 
    0x31, 0x32, 0x7, 0x14, 0x2, 0x2, 0x32, 0x68, 0x3, 0x2, 0x2, 0x2, 0x33, 
    0x34, 0x7, 0x6, 0x2, 0x2, 0x34, 0x35, 0x7, 0xd, 0x2, 0x2, 0x35, 0x36, 
    0x5, 0xc, 0x7, 0x2, 0x36, 0x37, 0x7, 0xe, 0x2, 0x2, 0x37, 0x3a, 0x5, 
    0xa, 0x6, 0x2, 0x38, 0x39, 0x7, 0x7, 0x2, 0x2, 0x39, 0x3b, 0x5, 0xa, 
    0x6, 0x2, 0x3a, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x3, 0x2, 0x2, 
    0x2, 0x3b, 0x68, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x40, 0x7, 0x11, 0x2, 0x2, 
    0x3d, 0x3f, 0x5, 0x6, 0x4, 0x2, 0x3e, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 
    0x42, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 
    0x3, 0x2, 0x2, 0x2, 0x41, 0x43, 0x3, 0x2, 0x2, 0x2, 0x42, 0x40, 0x3, 
    0x2, 0x2, 0x2, 0x43, 0x68, 0x7, 0x12, 0x2, 0x2, 0x44, 0x45, 0x7, 0x8, 
    0x2, 0x2, 0x45, 0x48, 0x7, 0xd, 0x2, 0x2, 0x46, 0x49, 0x5, 0x8, 0x5, 
    0x2, 0x47, 0x49, 0x5, 0xc, 0x7, 0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 
    0x48, 0x47, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x3, 0x2, 0x2, 0x2, 0x49, 
    0x4a, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4c, 0x7, 0x14, 0x2, 0x2, 0x4b, 0x4d, 
    0x5, 0xc, 0x7, 0x2, 0x4c, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x3, 
    0x2, 0x2, 0x2, 0x4d, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x50, 0x7, 0x14, 
    0x2, 0x2, 0x4f, 0x51, 0x5, 0xc, 0x7, 0x2, 0x50, 0x4f, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x53, 0x7, 0xe, 0x2, 0x2, 0x53, 0x68, 0x5, 0xa, 0x6, 0x2, 0x54, 
    0x55, 0x7, 0x9, 0x2, 0x2, 0x55, 0x56, 0x7, 0xd, 0x2, 0x2, 0x56, 0x57, 
    0x5, 0xc, 0x7, 0x2, 0x57, 0x58, 0x7, 0xe, 0x2, 0x2, 0x58, 0x59, 0x5, 
    0xa, 0x6, 0x2, 0x59, 0x68, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0xa, 
    0x2, 0x2, 0x5b, 0x5c, 0x5, 0xa, 0x6, 0x2, 0x5c, 0x5d, 0x7, 0x9, 0x2, 
    0x2, 0x5d, 0x5e, 0x7, 0xd, 0x2, 0x2, 0x5e, 0x5f, 0x5, 0xc, 0x7, 0x2, 
    0x5f, 0x60, 0x7, 0xe, 0x2, 0x2, 0x60, 0x61, 0x7, 0x14, 0x2, 0x2, 0x61, 
    0x68, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x7, 0xb, 0x2, 0x2, 0x63, 0x68, 
    0x7, 0x14, 0x2, 0x2, 0x64, 0x65, 0x7, 0xc, 0x2, 0x2, 0x65, 0x68, 0x7, 
    0x14, 0x2, 0x2, 0x66, 0x68, 0x7, 0x14, 0x2, 0x2, 0x67, 0x2c, 0x3, 0x2, 
    0x2, 0x2, 0x67, 0x30, 0x3, 0x2, 0x2, 0x2, 0x67, 0x33, 0x3, 0x2, 0x2, 
    0x2, 0x67, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x67, 0x44, 0x3, 0x2, 0x2, 0x2, 
    0x67, 0x54, 0x3, 0x2, 0x2, 0x2, 0x67, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x67, 
    0x62, 0x3, 0x2, 0x2, 0x2, 0x67, 0x64, 0x3, 0x2, 0x2, 0x2, 0x67, 0x66, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0xb, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 0x8, 
    0x7, 0x1, 0x2, 0x6a, 0x6b, 0x9, 0x2, 0x2, 0x2, 0x6b, 0x76, 0x5, 0xc, 
    0x7, 0xe, 0x6c, 0x6d, 0x7, 0xd, 0x2, 0x2, 0x6d, 0x6e, 0x5, 0xc, 0x7, 
    0x2, 0x6e, 0x6f, 0x7, 0xe, 0x2, 0x2, 0x6f, 0x76, 0x3, 0x2, 0x2, 0x2, 
    0x70, 0x71, 0x7, 0x27, 0x2, 0x2, 0x71, 0x72, 0x7, 0x3, 0x2, 0x2, 0x72, 
    0x76, 0x5, 0xc, 0x7, 0x5, 0x73, 0x76, 0x7, 0x27, 0x2, 0x2, 0x74, 0x76, 
    0x7, 0x26, 0x2, 0x2, 0x75, 0x69, 0x3, 0x2, 0x2, 0x2, 0x75, 0x6c, 0x3, 
    0x2, 0x2, 0x2, 0x75, 0x70, 0x3, 0x2, 0x2, 0x2, 0x75, 0x73, 0x3, 0x2, 
    0x2, 0x2, 0x75, 0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x91, 0x3, 0x2, 0x2, 
    0x2, 0x77, 0x78, 0xc, 0xd, 0x2, 0x2, 0x78, 0x79, 0x9, 0x3, 0x2, 0x2, 
    0x79, 0x90, 0x5, 0xc, 0x7, 0xe, 0x7a, 0x7b, 0xc, 0xc, 0x2, 0x2, 0x7b, 
    0x7c, 0x9, 0x4, 0x2, 0x2, 0x7c, 0x90, 0x5, 0xc, 0x7, 0xd, 0x7d, 0x7e, 
    0xc, 0xb, 0x2, 0x2, 0x7e, 0x7f, 0x9, 0x5, 0x2, 0x2, 0x7f, 0x90, 0x5, 
    0xc, 0x7, 0xc, 0x80, 0x81, 0xc, 0xa, 0x2, 0x2, 0x81, 0x82, 0x9, 0x6, 
    0x2, 0x2, 0x82, 0x90, 0x5, 0xc, 0x7, 0xb, 0x83, 0x84, 0xc, 0x9, 0x2, 
    0x2, 0x84, 0x85, 0x7, 0x1e, 0x2, 0x2, 0x85, 0x90, 0x5, 0xc, 0x7, 0xa, 
    0x86, 0x87, 0xc, 0x8, 0x2, 0x2, 0x87, 0x88, 0x7, 0x1f, 0x2, 0x2, 0x88, 
    0x90, 0x5, 0xc, 0x7, 0x9, 0x89, 0x8a, 0xc, 0x7, 0x2, 0x2, 0x8a, 0x8b, 
    0x7, 0x15, 0x2, 0x2, 0x8b, 0x8c, 0x5, 0xc, 0x7, 0x2, 0x8c, 0x8d, 0x7, 
    0x16, 0x2, 0x2, 0x8d, 0x8e, 0x5, 0xc, 0x7, 0x8, 0x8e, 0x90, 0x3, 0x2, 
    0x2, 0x2, 0x8f, 0x77, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x7a, 0x3, 0x2, 0x2, 
    0x2, 0x8f, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x80, 0x3, 0x2, 0x2, 0x2, 
    0x8f, 0x83, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x86, 0x3, 0x2, 0x2, 0x2, 0x8f, 
    0x89, 0x3, 0x2, 0x2, 0x2, 0x90, 0x93, 0x3, 0x2, 0x2, 0x2, 0x91, 0x8f, 
    0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x7, 0x4, 
    0x2, 0x2, 0x95, 0xf, 0x3, 0x2, 0x2, 0x2, 0xe, 0x1b, 0x24, 0x2a, 0x3a, 
    0x40, 0x48, 0x4c, 0x50, 0x67, 0x75, 0x8f, 0x91, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

MiniDecafParser::Initializer MiniDecafParser::_init;
